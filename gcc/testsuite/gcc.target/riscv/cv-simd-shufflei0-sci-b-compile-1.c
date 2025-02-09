/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvsimd -mabi=ilp32" } */

int
foo1 (int a)
{
	return __builtin_riscv_cv_simd_shuffle_sci_b (a, 0);
}

int
foo2 (int a)
{
        return __builtin_riscv_cv_simd_shuffle_sci_b (a, 63);
}

/* { dg-final { scan-assembler-times "cv\\.shufflei0\\.sci\\.b" 2 } } */
/* { dg-final { scan-assembler-times "cv\\.shufflei0\\.sci\\.b\t\[a-z\]\[0-99\],\[a-z\]\[0-99\],0" 1 } } */
/* { dg-final { scan-assembler-times "cv\\.shufflei0\\.sci\\.b\t\[a-z\]\[0-99\],\[a-z\]\[0-99\],63" 1 } } */
