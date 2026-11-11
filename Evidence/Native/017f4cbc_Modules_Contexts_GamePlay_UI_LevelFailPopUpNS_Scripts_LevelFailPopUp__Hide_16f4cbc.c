/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailPopUp$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__Hide (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailPopUp$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__Hide
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__Hide_16f4cbc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((bRam0000000005c24b73 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0578ecd0);
    FUN_012d0dc8(PTR_DAT_057666e0);
    FUN_012d0dc8(PTR_DAT_057cc480);
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c24b73 = 1;
  }
  puVar1 = PTR_DAT_0578b048;
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x28) + 0x18);
    lVar5 = *plVar4;
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578b048);
    if (lVar2 != 0) {
      System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_057666e0,0);
      plVar3 = (long *)System_Delegate__Remove_23e3b70(lVar5,lVar2,0);
      if (plVar3 == (long *)0x0) {
        *plVar4 = 0;
      }
      else {
        lVar2 = *(long *)puVar1;
        if ((*plVar3 != lVar2) || (*plVar4 = (long)plVar3, *plVar3 != lVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(plVar3);
        }
      }
      FUN_012d0d74(plVar4,plVar3);
      lVar5 = *(long *)(param_1 + 0x50);
      lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if ((lVar2 != 0) &&
         (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_057cc480,0), lVar5 != 0)
         ) {
        Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
                  (lVar5,lVar2,0);
        lVar5 = *(long *)(param_1 + 0x48);
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if ((lVar2 != 0) &&
           (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_0578ecd0,0),
           lVar5 != 0)) {
          Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
                    (lVar5,lVar2,0);
          lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
          puVar1 = PTR_DAT_05798298;
          if (lVar2 != 0) {
            UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            if (cRam0000000005c244b5 == '\0') {
              FUN_012d0dc8(PTR_DAT_05798298);
              cRam0000000005c244b5 = '\x01';
            }
            lVar2 = *(long *)puVar1;
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar2 = *(long *)puVar1;
            }
            return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

