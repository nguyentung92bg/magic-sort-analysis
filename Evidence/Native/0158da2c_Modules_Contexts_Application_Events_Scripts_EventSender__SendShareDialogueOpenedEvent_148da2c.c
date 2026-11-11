/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendShareDialogueOpenedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendShareDialogueOpenedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendShareDialogueOpenedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendShareDialogueOpenedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* source,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendShareDialogueOpenedEvent_148da2c
               (undefined8 param_1,undefined8 param_2)

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
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 uStack_58;
  uint uStack_54;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23864 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057ee3f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057996c8);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_05796e78);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23864 = 1;
  }
  lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
    lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar11,*(undefined8 *)PTR_DAT_057ee3f0);
    puVar1 = PTR_DAT_057c8a60;
    lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
      plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar12,*(undefined8 *)PTR_DAT_057a1e60);
      lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if ((lVar12 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar12,*(undefined8 *)PTR_DAT_057996c8,0), puVar4 = PTR_DAT_057db748,
         puVar3 = PTR_DAT_057ab1a0, puVar1 = PTR_DAT_05796e78, puVar2 = PTR_DAT_057636d0,
         lVar11 != 0)) {
        iVar5 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetFriendsCount_1c7a8ec
                          (lVar11,0);
        uStack_54 = iVar5 - 1U & ((int)(iVar5 - 1U) >> 0x1f ^ 0xffffffffU);
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar1,uVar8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar3,param_2,0);
        puVar1 = PTR_DAT_057caaf0;
        if (plVar7 != (long *)0x0) {
          lVar13 = *plVar7;
          lVar10 = *(long *)puVar2;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar10) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_0158dc44;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar7,lVar10,1);
LAB_0158dc44:
          uStack_58 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar12,*(undefined8 *)puVar1,uVar8,0);
        }
        puVar1 = PTR_DAT_0575f9f0;
        iVar5 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetFriendsCount_1c7a8ec
                          (lVar11,0);
        if (plVar7 == (long *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar10 = *plVar7;
          lVar11 = *(long *)puVar2;
          uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar11) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_0158dcfc;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar7,lVar11,1);
LAB_0158dcfc:
          iVar6 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          lVar11 = (long)iVar6;
        }
        uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__InviteSend_2dbc474
                          (iVar5 - 1U & ((int)(iVar5 - 1U) >> 0x1f ^ 0xffffffffU),param_2,lVar11,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar12);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

