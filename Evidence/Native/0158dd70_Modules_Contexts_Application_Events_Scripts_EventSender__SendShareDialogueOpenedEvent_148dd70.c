/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendShareDialogueOpenedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendShareDialogueOpenedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendShareDialogueOpenedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendShareDialogueOpenedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendShareDialogueOpenedEvent_148dd70
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 uStack_58;
  uint uStack_54;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23865 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057ee3f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057f37b8);
    FUN_012d0dc8(PTR_DAT_0577dd10);
    FUN_012d0dc8(PTR_DAT_05796e78);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23865 = 1;
  }
  lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
    lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar12,*(undefined8 *)PTR_DAT_057ee3f0);
    puVar1 = PTR_DAT_057c8a60;
    lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar13,*(undefined8 *)PTR_DAT_057a1e60);
      lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if ((lVar13 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar13,*(undefined8 *)PTR_DAT_0577dd10,0), puVar5 = PTR_DAT_057f37b8,
         puVar4 = PTR_DAT_057e3618, puVar3 = PTR_DAT_057db748, puVar1 = PTR_DAT_05796e78,
         puVar2 = PTR_DAT_057636d0, lVar12 != 0)) {
        iVar6 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetFriendsCount_1c7a8ec
                          (lVar12,0);
        uStack_54 = iVar6 - 1U & ((int)(iVar6 - 1U) >> 0x1f ^ 0xffffffffU);
        uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_54);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar1,uVar9,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar4,*(undefined8 *)puVar5,0);
        puVar1 = PTR_DAT_057caaf0;
        if (plVar8 != (long *)0x0) {
          lVar14 = *plVar8;
          lVar11 = *(long *)puVar2;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar11) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_0158df98;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar8,lVar11,1);
LAB_0158df98:
          uStack_58 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_58);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar1,uVar9,0);
        }
        puVar1 = PTR_DAT_0575f9f0;
        iVar6 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetFriendsCount_1c7a8ec
                          (lVar12,0);
                    /* try { // try from 0158dfe8 to 0168e13b has its CatchHandler @ 0158dfe8
                       catch() { ... } // from try @ 0158dfe8 with catch @ 0158dfe8
                       catch() { ... } // from try @ 0158e4c0 with catch @ 0158dfe8
                       catch() { ... } // from try @ 0158e590 with catch @ 0158dfe8
                       catch() { ... } // from try @ 0158e710 with catch @ 0158dfe8
                       catch() { ... } // from try @ 0158e770 with catch @ 0158dfe8
                       catch() { ... } // from try @ 0158e810 with catch @ 0158dfe8
                       catch() { ... } // from try @ 0158e844 with catch @ 0158dfe8
                       catch() { ... } // from try @ 0158e8d0 with catch @ 0158dfe8 */
        if (plVar8 == (long *)0x0) {
          lVar12 = 0;
        }
        else {
          lVar11 = *plVar8;
          lVar12 = *(long *)puVar2;
          uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar12) {
                puVar10 = (undefined8 *)(lVar11 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_0158e04c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar8,lVar12,1);
LAB_0158e04c:
          iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          lVar12 = (long)iVar7;
        }
        uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__ReferralPopupInviteImpression_2db4af8
                          (iVar6 - 1U & ((int)(iVar6 - 1U) >> 0x1f ^ 0xffffffffU),lVar12,
                           *(undefined8 *)puVar5,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar13);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

