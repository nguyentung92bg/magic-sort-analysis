/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.QuitAreYouSureButtonController$$RegisterButtons
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_QuitAreYouSureButtonController__RegisterButtons (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_QuitAreYouSureButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.QuitAreYouSureButtonController$$RegisterButtons
   void 
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_QuitAreYouSureButtonController__RegisterButtons
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_QuitAreYouSureButtonController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_QuitAreYouSureButtonController__RegisterButtons_16f5388
               (long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c24b78 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0575a800);
    FUN_012d0dc8(PTR_DAT_05761b80);
    bRam0000000005c24b78 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar3 != 0) &&
     (System_Action___ctor_21239bc(lVar3,param_1,*(undefined8 *)PTR_DAT_05761b80,0), lVar6 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
              (lVar6,lVar3,0);
    lVar6 = *(long *)(param_1 + 0x28);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar3 != 0) &&
       (System_Action___ctor_21239bc(lVar3,param_1,*(undefined8 *)PTR_DAT_0575a800,0), lVar6 != 0))
    {
      if ((bRam0000000005c3941f & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0578b048,lVar3,0);
        bRam0000000005c3941f = 1;
      }
      puVar1 = PTR_DAT_0578b048;
      plVar7 = (long *)(lVar6 + 0x38);
      lVar6 = *plVar7;
      while ((plVar4 = (long *)System_Delegate__Combine_23e3964(lVar6,lVar3,0),
             plVar4 == (long *)0x0 || (*plVar4 == *(long *)puVar1))) {
        lVar5 = FUN_01351224(plVar7,plVar4,lVar6);
        bVar2 = lVar6 == lVar5;
        lVar6 = lVar5;
        if (bVar2) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(plVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

