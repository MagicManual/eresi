/* Adam 'pi3' Zabrocki */
/* Manuel Martin - 2007 */

#include <libasm.h>

/* DCLZ rd,rs */

int asm_mips_dclz(asm_instr *ins, u_char *buf, u_int len,
                  asm_processor *proc)
{
   ins->instr = ASM_MIPS_DCLZ;
   ins->type = ASM_TYPE_ARCH;
   asm_mips_operand_fetch(&ins->op[0], buf, ASM_MIPS_OTYPE_REGISTER, ins);

   /* Exceptions: None */

   return 777;
}