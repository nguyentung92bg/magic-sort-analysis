/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendFriendsImpressionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendFriendsImpressionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendFriendsImpressionEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendFriendsImpressionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendFriendsImpressionEvent_148d6b8
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
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
  undefined4 uStack_54;
  undefined4 uStack_48;
  uint uStack_44;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23863 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057ee3f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057da7e0);
    FUN_012d0dc8(PTR_DAT_05796e78);
    FUN_012d0dc8(PTR_DAT_05785e18);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23863 = 1;
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
                    (lVar13,*(undefined8 *)PTR_DAT_05785e18,0), puVar4 = PTR_DAT_057db748,
         puVar3 = PTR_DAT_057da7e0, puVar1 = PTR_DAT_05796e78, puVar2 = PTR_DAT_057636d0,
         lVar12 != 0)) {
                    /* try { // try from 0158d808 to 0168d8b7 has its CatchHandler @ 0158d808
                       catch() { ... } // from try @ 0158d808 with catch @ 0158d808
                       catch() { ... } // from try @ 0158d91c with catch @ 0158d808
                       catch() { ... } // from try @ 0158d968 with catch @ 0158d808
                       catch() { ... } // from try @ 0158d9a0 with catch @ 0158d808
                       catch() { ... } // from try @ 0158d9d8 with catch @ 0158d808 */
        iVar5 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetFriendsCount_1c7a8ec
                          (lVar12,0);
        uStack_44 = iVar5 - 1U & ((int)(iVar5 - 1U) >> 0x1f ^ 0xffffffffU);
        uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_44);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar1,uVar9,0);
        uStack_48 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetRequestsCount_1c7a934
                              (lVar12,0);
        uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_48);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar13,*(undefined8 *)puVar3,uVar9,0);
        puVar1 = PTR_DAT_057caaf0;
        if (plVar8 != (long *)0x0) {
          lVar14 = *plVar8;
          lVar11 = *(long *)puVar2;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
                    /* try { // try from 0158d8b8 to 0168d8bf has its CatchHandler @ 0158d984 */
              if (*(long *)(piVar16 + -2) == lVar11) {
                    /* try { // try from 0158d8e0 to 0168d8ef has its CatchHandler @ 0158d978 */
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_0158d8ec;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
                    /* try { // try from 0158d8c8 to 0168d8d3 has its CatchHandler @ 0158d980 */
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar8,lVar11,1);
LAB_0158d8ec:
                    /* try { // try from 0158d8f4 to 0168d8ff has its CatchHandler @ 0158d97c */
          uStack_54 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
                    /* try { // try from 0158d90c to 0168d91b has its CatchHandler @ 0158d974 */
                    /* try { // try from 0158d91c to 0168d95f has its CatchHandler @ 0158d808 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar1,uVar9,0);
        }
        puVar1 = PTR_DAT_0575f9f0;
        iVar5 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetFriendsCount_1c7a8ec
                          (lVar12,0);
        iVar6 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetRequestsCount_1c7a934
                          (lVar12,0);
        if (plVar8 == (long *)0x0) {
                    /* try { // try from 0158d99c to 0168d99f has its CatchHandler @ 0158d9c8 */
          lVar12 = 0;
                    /* try { // try from 0158d9a0 to 0168d9cf has its CatchHandler @ 0158d808 */
        }
        else {
          lVar11 = *plVar8;
                    /* try { // try from 0158d960 to 0168d963 has its CatchHandler @ 0158d970 */
          lVar12 = *(long *)puVar2;
                    /* try { // try from 0158d964 to 0168d967 has its CatchHandler @ 0158d96c */
          uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
                    /* try { // try from 0158d968 to 0168d99b has its CatchHandler @ 0158d808 */
          if (uVar15 != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0158d964 with catch @ 0158d96c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0158d960 with catch @ 0158d970
                        */
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0158d90c with catch @ 0158d974
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0158d8e0 with catch @ 0158d978
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0158d8f4 with catch @ 0158d97c
                        */
              if (*(long *)(piVar16 + -2) == lVar12) {
                puVar10 = (undefined8 *)(lVar11 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_0158d9b8;
              }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0158d8c8 with catch @ 0158d980
                        */
              uVar15 = uVar15 - 1;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0158d8b8 with catch @ 0158d984
                        */
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_0131971c(plVar8,lVar12,1);
LAB_0158d9b8:
          iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          lVar12 = (long)iVar7;
                    /* catch() { ... } // from try @ 0158d99c with catch @ 0158d9c8 */
        }
                    /* try { // try from 0158d9d0 to 0168d9d7 has its CatchHandler @ 0158d9ec */
                    /* try { // try from 0158d9d8 to 0168d9e3 has its CatchHandler @ 0158d808 */
        uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__FriendsTabImpression_2db4a58
                          (iVar5 - 1U & ((int)(iVar5 - 1U) >> 0x1f ^ 0xffffffffU),(long)iVar6,lVar12
                           ,0);
                    /* try { // try from 0158d9e4 to 0168d9eb has its CatchHandler @ 0158d9ec */
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0158d9d0 with catch @ 0158d9ec
                       catch(type#2 @ 00000000) { ... } // from try @ 0158d9e4 with catch @ 0158d9ec
                        */
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

