    .file   "start.c"
    .section .rdata,"dr"
LC0:
    .ascii "%d\12\0"
    .text
    .globl  _main
    .def    _main;  .scl    2;  .type   32; .endef
_main:
    pushl   %ebp
    movl    %esp, %ebp
    subl    $40, %esp
    movl    $0, -12(%ebp)
    movl    -12(%ebp), %eax
    movl    %eax, 4(%esp)
    movl    $LC0, (%esp)
    call    _printf
    leave
    ret
    .def    _printf;    .scl    2;  .type   32; .endef