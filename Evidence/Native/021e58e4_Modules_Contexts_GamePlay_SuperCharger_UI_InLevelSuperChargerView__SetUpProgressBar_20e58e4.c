/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.UI.InLevelSuperChargerView$$SetUpProgressBar
void Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__SetUpProgressBar (Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView_o* __this, Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService_o* service, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.UI.InLevelSuperChargerView$$SetUpProgressBar
   void Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__SetUpProgressBar
   (Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView_o* __this,
   Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService_o* service, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__SetUpProgressBar_20e58e4
               (long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  uint uStack_38;
  uint uStack_34;
  
  if ((bRam0000000005c29702 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_057c0628);
    bRam0000000005c29702 = 1;
  }
  puVar4 = PTR_DAT_057d6f00;
  if (param_2 != 0) {
    uVar6 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetTargetLevelProgress_2970054
                      (param_2,0);
    uVar7 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetProgress_2970030
                      (param_2,0);
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar11);
    }
    if (cRam0000000005c230ab == '\0') {
      FUN_012d0dc8(PTR_DAT_05800a28);
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c230ab = '\x01';
    }
    puVar5 = PTR_DAT_057db748;
    puVar3 = PTR_DAT_057c0628;
    if ((int)uVar6 < 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      System_Math__ThrowMinMaxException_int__29c3384(0,uVar6,*(undefined8 *)PTR_DAT_05800a28);
    }
    uVar1 = uVar6;
    if ((int)uVar7 <= (int)uVar6) {
      uVar1 = uVar7;
    }
    uVar2 = 0;
    if (-1 < (int)uVar7) {
      uVar2 = uVar1;
    }
    iVar8 = System_Math__Max_26cd24c(uVar6,1,0);
    Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__UpdateProgress_20e5a84
              ((float)(int)uVar2 / (float)iVar8,param_1);
    plVar12 = *(long **)(param_1 + 0x18);
    uStack_34 = uVar2;
    uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_34);
    uStack_38 = uVar6;
    uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_38);
    uVar9 = System_String__Format_1ed15b8(*(undefined8 *)puVar3,uVar9,uVar10,0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x558))(plVar12,uVar9,*(undefined8 *)(*plVar12 + 0x560));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

