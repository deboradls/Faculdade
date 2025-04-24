.data
    base:   .word 2      # Definir a base (exemplo: 2)
    exp:    .word 10     # Definir o expoente (exemplo: 10)
    result: .word 0      # Espaço para armazenar o resultado

.text

.globl main
main:
    # Carregar valores da memória
    lw $t1, base       # $t1 = base
    lw $t2, exp        # $t2 = exp
    li $t0, 1          # Inicializa result = 1

    # Verifica se expoente é 0
    beqz $t2, end      # Se exp == 0, resultado é 1

exp_loop:
    # Verifica se o expoente é ímpar (bit menos significativo = 1)
    andi $t3, $t2, 1
    beqz $t3, skip_mult
    mult $t0, $t1      # Multiplica result = base
    mflo $t0           # Armazena o resultado

skip_mult:
    mult $t1, $t1      # base = base base
    mflo $t1           # Pega o resultado

    srl $t2, $t2, 1    # exp = exp / 2
    bnez $t2, exp_loop # Continua enquanto exp != 0

end:
    sw $t0, result     # Armazena resultado na memória

    # Encerrar programa
    li $v0, 10
    syscall