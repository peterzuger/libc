# System dependant functions

Architectures:
    * cortex m0
    * cortex m0plus
    * cortex m3
    * cortex m4
    * cortex m7
# Summary
    This should be a complete list of the options that
    have to be configured before compiling this library
    * MCPU
      this option sets the -mcpu flag
      * cortex-m0
      * cortex-m0plus
      * cortex-m3
      * cortex-m4
      * cortex-m7
      * cortex-m4+nofp
      * cortex-m7+nofp
    * FPU
    this option is used to enable or disable the fpu
    if no fpu is present but it is still enabled UB can occur
    the following flags are configured
    -mfpu       -> fpv4-sp-d16
    -mfloat-abi -> soft softfp hard
        + soft   : library calls for floating-point operations
        + softfp : allows the generation of code using hardware floating-point instructions, but still uses the soft-float calling conventions
        + hard   : allows generation of floating-point instructions and uses FPU-specific calling conventions
    * enable
    * disable
  * RAM
## stdlib.h
### malloc
    the malloc family of functions have to be configured for every processor
    the values HEAP\_BOT and HEAP\_SIZE have to be set to the appropriate values
    HEAP\_BOT should be set to the base addres of the RAM
    HEAP\_SIZE must be set to the size you want to give malloc
### abort
    The abort() function excecutes an illegal instruction to raise
    the NMI exception handler.
    this instruction is dependant on the mode of the processor
    the instruction that is used at the moment should trigger an illegal
    instruction regardless of the InstructionSetArchitecture(ISA) mode
