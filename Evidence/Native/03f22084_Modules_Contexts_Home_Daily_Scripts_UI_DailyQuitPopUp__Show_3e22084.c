/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyQuitPopUp$$Show
void Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp__Show (Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyQuitPopUp$$Show
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp__Show
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp__Show_3e22084(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c38118 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05805608);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05809548);
    FUN_012d0dc8(PTR_DAT_05768bd8);
    bRam0000000005c38118 = 1;
  }
  if (((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
      (lVar5 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar5 != 0)) &&
     (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_05805608), puVar4 = PTR_DAT_0578b048,
     lVar5 != 0)) {
    uVar6 = Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetFailFlowAnimationConfig_16070fc
                      (lVar5,0);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    FUN_012d0d74((undefined8 *)(param_1 + 0x30),uVar6);
    lVar8 = *(long *)(param_1 + 0x20);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if ((lVar5 != 0) &&
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_05809548,0), lVar8 != 0))
    {
      Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                (lVar8,lVar5,0);
      lVar8 = *(long *)(param_1 + 0x28);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if ((lVar5 != 0) &&
         (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_05768bd8,0), lVar8 != 0)
         ) {
        Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                  (lVar8,lVar5,0);
        if ((bRam0000000005c3811b & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057874c0);
          bRam0000000005c3811b = 1;
        }
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0),
           lVar5 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
          lVar5 = *(long *)(param_1 + 0x30);
          if ((lVar5 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
            UnityEngine_Transform__set_localScale_40932d0
                      (*(undefined4 *)(lVar5 + 0x160),*(undefined4 *)(lVar5 + 0x164),
                       *(undefined4 *)(lVar5 + 0x168),*(long *)(param_1 + 0x18),0);
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0),
               lVar5 != 0)) {
              UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
              if ((*(long *)(param_1 + 0x30) != 0) &&
                 (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x158), lVar5 != 0)) {
                uVar6 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                                  (0x3f800000,*(undefined4 *)(lVar5 + 0x10),
                                   *(undefined8 *)(param_1 + 0x18),0);
                if (*(long *)(param_1 + 0x30) != 0) {
                  uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                    (uVar6,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),
                                     *(undefined8 *)PTR_DAT_057874c0);
                  puVar7 = (undefined8 *)(param_1 + 0x40);
                  *puVar7 = uVar6;
                  if (iRam0000000005c3d478 != 0) {
                    puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  return;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

