/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$OnRecycle
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnRecycle (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$OnRecycle
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnRecycle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnRecycle_2609994
               (long *param_1)

{
  long lVar1;
  
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x73) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  if (param_1[9] != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayDefault_2609a1c();
    Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_1,0,0);
    if (cRam0000000005c230a9 == '\0') {
                    /* try { // try from 027099d8 to 02809a4f has its CatchHandler @ 02709a50 */
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    lVar1 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x02709a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1d8))
              (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
               *(undefined4 *)(lVar1 + 0x14),param_1,*(undefined8 *)(*param_1 + 0x1e0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

