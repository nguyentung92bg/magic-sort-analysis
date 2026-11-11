/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendFriendsInteractionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendFriendsInteractionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* interactionType, System_String_o* targetUserId, System_String_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendFriendsInteractionEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendFriendsInteractionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   interactionType, System_String_o* targetUserId, System_String_o* source, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendFriendsInteractionEvent_148d2f8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 uStack_68;
  uint uStack_64;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23862 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057ee3f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0579d4d0);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_057cfe50);
    FUN_012d0dc8(PTR_DAT_05796e78);
    FUN_012d0dc8(PTR_DAT_05787df8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23862 = 1;
  }
  lVar10 = **(long **)(*(long *)puVar3 + 0xb8);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
    lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar10,*(undefined8 *)PTR_DAT_057ee3f0);
    puVar2 = PTR_DAT_057c8a60;
    lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
      plVar6 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
      lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar4 = PTR_DAT_057cfe50;
      puVar2 = PTR_DAT_057ab1a0;
      puVar3 = PTR_DAT_0579d4d0;
      if (lVar11 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar11,*(undefined8 *)PTR_DAT_05787df8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar4,param_2,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar3,param_3,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar2,param_4,0);
        puVar4 = PTR_DAT_057db748;
        puVar2 = PTR_DAT_05796e78;
        puVar3 = PTR_DAT_057636d0;
        if (lVar10 != 0) {
          iVar5 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetFriendsCount_1c7a8ec
                            (lVar10,0);
          uStack_64 = iVar5 - 1U & ((int)(iVar5 - 1U) >> 0x1f ^ 0xffffffffU);
          uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar11,*(undefined8 *)puVar2,uVar7,0);
          puVar2 = PTR_DAT_057caaf0;
          if (plVar6 != (long *)0x0) {
            lVar12 = *plVar6;
            lVar9 = *(long *)puVar3;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar9) {
                  puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_0158d570;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_0131971c(plVar6,lVar9,1);
LAB_0158d570:
            uStack_68 = (*(code *)*puVar8)(plVar6,puVar8[1]);
            uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar11,*(undefined8 *)puVar2,uVar7,0);
          }
          puVar2 = PTR_DAT_0575f9f0;
          iVar5 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetFriendsCount_1c7a8ec
                            (lVar10,0);
          uVar1 = iVar5 - 1U & ((int)(iVar5 - 1U) >> 0x1f ^ 0xffffffffU);
          if (plVar6 == (long *)0x0) {
            lVar10 = 0;
          }
          else {
            lVar9 = *plVar6;
            lVar10 = *(long *)puVar3;
            uVar13 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_0158d634;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_0131971c(plVar6,lVar10,1,uVar1);
LAB_0158d634:
            iVar5 = (*(code *)*puVar8)(plVar6,puVar8[1]);
            lVar10 = (long)iVar5;
          }
          uVar7 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__FriendInteraction_2db4964
                            (param_2,param_3,param_4,uVar1,lVar10,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar7,0);
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

