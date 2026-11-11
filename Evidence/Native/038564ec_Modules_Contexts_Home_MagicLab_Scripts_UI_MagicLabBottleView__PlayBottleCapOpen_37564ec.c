/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabBottleView$$PlayBottleCapOpen
void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__PlayBottleCapOpen (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabBottleView$$PlayBottleCapOpen
   void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__PlayBottleCapOpen
   (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__PlayBottleCapOpen_37564ec
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c33b55 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cd900);
    bRam0000000005c33b55 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)PTR_DAT_057cd900;
    if (pcRam0000000005c28c10 == (code *)0x0) {
      pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28c10)(lVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

