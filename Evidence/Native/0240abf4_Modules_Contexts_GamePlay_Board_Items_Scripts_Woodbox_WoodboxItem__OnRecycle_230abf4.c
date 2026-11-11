/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$OnRecycle
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__OnRecycle (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$OnRecycle
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__OnRecycle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__OnRecycle_230abf4
               (long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((bRam0000000005c2a673 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a3578);
    bRam0000000005c2a673 = 1;
  }
  lVar2 = param_1[0xb];
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_26a6bec(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
    }
    param_1[10] = 0;
    FUN_012d0d74(param_1 + 10,0);
    Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_1,0,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x0240acb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1d8))
              (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
               *(undefined4 *)(lVar2 + 0x14),param_1,*(undefined8 *)(*param_1 + 0x1e0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

