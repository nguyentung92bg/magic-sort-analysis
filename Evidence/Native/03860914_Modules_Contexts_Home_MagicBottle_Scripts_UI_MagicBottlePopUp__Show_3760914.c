/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottlePopUp$$Show
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottlePopUp__Show (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottlePopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottlePopUp$$Show
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottlePopUp__Show
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottlePopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottlePopUp__Show_3760914
               (long param_1,long *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33bc5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fe590);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c2a38);
    bRam0000000005c33bc5 = 1;
  }
  if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar5 != 0)) {
    lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_057fe590);
    plVar7 = (long *)(param_1 + 0x18);
    *plVar7 = lVar5;
    FUN_012d0d74(plVar7,lVar5);
    if (*plVar7 != 0) {
      Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__MarkEventShownInLifeTime_375d7cc
                ();
      if (param_2 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_057c2a38 + 300);
        if ((bVar2 <= *(byte *)(*param_2 + 300)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) ==
            *(long *)PTR_DAT_057c2a38)) {
          if (cRam0000000005c230a8 == '\0') {
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
          if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0) goto LAB_03860aa8;
          Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicBottlePopUpImpression_1465664
                    (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),
                     *(undefined4 *)((long)param_2 + 0x24),0);
        }
      }
      if (*plVar7 != 0) {
        uVar6 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__IsInfoPopUpIntroduced_375d760
                          ();
        if ((uVar6 & 1) == 0) {
          Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottlePopUp__PlayFirstShowEverAnimations_3760aac
                    (param_1);
        }
        if (*plVar7 != 0) {
          uVar4 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetProgress_375d714
                            ();
          if (*plVar7 != 0) {
            lVar5 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c
                              (*plVar7);
            if ((lVar5 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
              uVar1 = *(undefined4 *)(lVar5 + 0x18);
              Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__Initialize_3760b64
                        (*(long *)(param_1 + 0x28));
              if (*(long *)(param_1 + 0x28) != 0) {
                Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__SetProgress_3760bf0
                          (*(long *)(param_1 + 0x28),uVar4,uVar1);
                if (*plVar7 != 0) {
                  lVar5 = *(long *)(*plVar7 + 0x18);
                  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
                    *(undefined1 *)(lVar5 + 0x18) = 1;
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03860aa8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

