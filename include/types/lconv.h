/**
 * @file   types/lconv.h
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  formatting of numeric values
 */
#ifndef __TYPE_LCONV_H__
#define __TYPE_LCONV_H__

#if !defined(__STRUCT_LCONV_DEFINED__)
# define __STRUCT_LCONV_DEFINED__
struct lconv{
    char *decimal_point;      /* "."      */
    char *thousands_sep;      /* ""       */
    char *grouping;           /* ""       */
    char *mon_decimal_point;  /* ""       */
    char *mon_thousands_sep;  /* ""       */
    char *mon_grouping;       /* ""       */
    char *positive_sign;      /* ""       */
    char *negative_sign;      /* ""       */
    char *currency_symbol;    /* ""       */
    char frac_digits;         /* CHAR_MAX */
    char p_cs_precedes;       /* CHAR_MAX */
    char n_cs_precedes;       /* CHAR_MAX */
    char p_sep_by_space;      /* CHAR_MAX */
    char n_sep_by_space;      /* CHAR_MAX */
    char p_sign_posn;         /* CHAR_MAX */
    char n_sign_posn;         /* CHAR_MAX */
    char *int_curr_symbol;    /* ""       */
    char int_frac_digits;     /* CHAR_MAX */
    char int_p_cs_precedes;   /* CHAR_MAX */
    char int_n_cs_precedes;   /* CHAR_MAX */
    char int_p_sep_by_space;  /* CHAR_MAX */
    char int_n_sep_by_space;  /* CHAR_MAX */
    char int_p_sign_posn;     /* CHAR_MAX */
    char int_n_sign_posn;     /* CHAR_MAX */
};
#endif /* !defined(__STRUCT_LCONV_DEFINED__) */

#endif /* __TYPE_LCONV_H__ */
