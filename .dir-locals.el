;;; Directory Local Variables
;;; For more information see (info "(emacs) Directory Variables")

((nil
  (eval let*
        ((x (dir-locals-find-file default-directory))
         (this-directory (if (listp x) (car x) (file-name-directory x))))
        (set (make-local-variable 'current-directory)
             this-directory)
        (set (make-local-variable 'compile-command)
             (format "make -C %1$s CPU=cortex-m4" current-directory)))))
