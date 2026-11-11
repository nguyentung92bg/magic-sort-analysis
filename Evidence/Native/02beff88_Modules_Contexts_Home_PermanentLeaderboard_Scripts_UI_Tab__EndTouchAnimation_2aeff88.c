/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Tab$$EndTouchAnimation
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__EndTouchAnimation (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Tab$$EndTouchAnimation
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__EndTouchAnimation
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__EndTouchAnimation_2aeff88
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uStack_30 = *(undefined4 *)(lVar2 + 0xc);
    uStack_2c = *(undefined4 *)(lVar2 + 0x10);
    uStack_28 = *(undefined4 *)(lVar2 + 0x14);
    if (pcRam0000000005c3a650 == (code *)0x0) {
      pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
    }
    (*pcRam0000000005c3a650)(lVar1,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

