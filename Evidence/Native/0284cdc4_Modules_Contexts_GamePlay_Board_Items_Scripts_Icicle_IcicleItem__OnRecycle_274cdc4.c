/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Icicle.IcicleItem$$OnRecycle
void Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__OnRecycle (Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Icicle.IcicleItem$$OnRecycle
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__OnRecycle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__OnRecycle_274cdc4
               (long *param_1)

{
  long lVar1;
  
  Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_1,0,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x0284ce28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1d8))
            (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
             *(undefined4 *)(lVar1 + 0x14),param_1,*(undefined8 *)(*param_1 + 0x1e0));
  return;
}

