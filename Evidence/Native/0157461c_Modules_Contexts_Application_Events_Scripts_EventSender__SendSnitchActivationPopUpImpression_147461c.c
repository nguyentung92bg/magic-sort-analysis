/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSnitchActivationPopUpImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSnitchActivationPopUpImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendSnitchActivationPopUpImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSnitchActivationPopUpImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSnitchActivationPopUpImpression_147461c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23808 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057f67a8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057f8398);
    FUN_012d0dc8(PTR_DAT_057fde60);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23808 = 1;
  }
  lVar10 = **(long **)(*(long *)puVar3 + 0xb8);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
    lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar10,*(undefined8 *)PTR_DAT_057f67a8);
    puVar2 = PTR_DAT_057c8a60;
    lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
      plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
      lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar11 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar11,*(undefined8 *)PTR_DAT_057f8398,0), puVar2 = PTR_DAT_057fde60,
         puVar3 = PTR_DAT_057db748, lVar10 != 0)) {
        uStack_44 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__GetProgress_246d528
                              (lVar10,0);
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_44);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar2,uVar8,0);
        puVar4 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar7 != (long *)0x0) {
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_015747fc;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_015747fc:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_48 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_48);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar11,*(undefined8 *)puVar4,uVar8,0);
          iVar5 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__GetProgress_246d528(lVar10,0);
          lVar10 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_01574898;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,1);
LAB_01574898:
          iVar6 = (*(code *)*puVar9)(plVar7,puVar9[1]);
                    /* try { // try from 015748b0 to 016749f7 has its CatchHandler @ 015748b0
                       catch() { ... } // from try @ 015748b0 with catch @ 015748b0
                       catch() { ... } // from try @ 01574a88 with catch @ 015748b0
                       catch() { ... } // from try @ 01574b0c with catch @ 015748b0
                       catch() { ... } // from try @ 01574b9c with catch @ 015748b0 */
          uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SnitchActivationImpression_2daf80c
                            ((long)iVar5,(long)iVar6,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar11)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

