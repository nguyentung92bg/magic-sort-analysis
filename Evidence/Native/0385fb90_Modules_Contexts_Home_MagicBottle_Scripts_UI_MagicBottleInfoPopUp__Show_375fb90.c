/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleInfoPopUp$$Show
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp__Show (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleInfoPopUp$$Show
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp__Show
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp__Show_375fb90
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uStack_24;
  
  if ((bRam0000000005c33bba & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fe590);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057bfd98);
    FUN_012d0dc8(PTR_DAT_057ea9b0);
    bRam0000000005c33bba = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057bfd98 + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057bfd98))
    {
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0) goto LAB_0385fd28;
      Modules_Contexts_Application_Events_Scripts_EventSender__SendMagicBottleInfoPopUpImpression_1465a34
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),*(undefined4 *)((long)param_2 + 0x24)
                 ,0);
    }
  }
  if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar3 != 0)) &&
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_057fe590), lVar3 != 0)) {
    plVar5 = *(long **)(param_1 + 0x40);
    lVar3 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c();
    puVar2 = PTR_DAT_057ea9b0;
    if (lVar3 != 0) {
      uStack_24 = *(undefined4 *)(lVar3 + 0x18);
      uVar4 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_24);
      uVar4 = System_String__Format_1ec10a8(*(undefined8 *)puVar2,uVar4,0);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x558))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x560));
        Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp__SetActiveAll_375f4d0
                  (param_1,0);
        Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp__PlayAnimationsWithInterval_375f640
                  (param_1);
        return;
      }
    }
  }
LAB_0385fd28:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

