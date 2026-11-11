/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$AddRewardAmount
void Modules_Contexts_Application_Events_Scripts_EventSender__AddRewardAmount (System_Collections_Generic_List_RewardModel__o* rewardModels, Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01562e18) */
/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$AddRewardAmount
   void Modules_Contexts_Application_Events_Scripts_EventSender__AddRewardAmount
   (System_Collections_Generic_List_RewardModel__o* rewardModels,
   Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__AddRewardAmount_1462b5c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  double dStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  double dStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_68;
  
  if ((bRam0000000005c237ae & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c1328);
    FUN_012d0dc8(PTR_DAT_05811f10);
    FUN_012d0dc8(PTR_DAT_057b3a70);
    FUN_012d0dc8(PTR_DAT_05803990);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057a6288);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    FUN_012d0dc8(PTR_DAT_0575a8a0);
    FUN_012d0dc8(PTR_DAT_057e54d0);
    FUN_012d0dc8(PTR_DAT_05786c98);
    FUN_012d0dc8(PTR_DAT_057e3b08);
    FUN_012d0dc8(PTR_DAT_057a3b60);
    bRam0000000005c237ae = 1;
  }
  puVar3 = PTR_DAT_057b3a70;
  puVar2 = PTR_DAT_057a6288;
  puVar1 = PTR_DAT_0576c1b8;
  uStack_88 = 0;
  lStack_80 = 0;
  dStack_90 = 0.0;
  uStack_68 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  dStack_b0 = 0.0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&dStack_c8,param_1,*(undefined8 *)PTR_DAT_057a6288);
    iVar9 = 0;
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    dVar11 = 0.0;
    uStack_88 = uStack_c0;
    dStack_90 = dStack_c8;
    lStack_80 = lStack_b8;
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&dStack_90,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
      if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01562fa0 to 01662fbb has its CatchHandler @ 0156306c */
        FUN_012d0ef0();
      }
      switch(*(undefined4 *)(lStack_80 + 0x10)) {
      case 1:
        iVar8 = *(int *)(lStack_80 + 0x14) + iVar8;
        break;
      case 2:
        uStack_68 = *(undefined8 *)(lStack_80 + 0x18);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        dVar10 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
        dVar11 = dVar11 + dVar10;
        break;
      case 4:
        iVar6 = *(int *)(lStack_80 + 0x14) + iVar6;
        break;
      case 5:
        iVar7 = *(int *)(lStack_80 + 0x14) + iVar7;
        break;
      case 6:
        iVar9 = *(int *)(lStack_80 + 0x14) + iVar9;
        break;
      case 0xd:
        if (*(long *)(lStack_80 + 0x20) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&dStack_c8,*(long *)(lStack_80 + 0x20),*(undefined8 *)puVar2);
          uStack_a8 = uStack_c0;
          dStack_b0 = dStack_c8;
          lStack_a0 = lStack_b8;
          while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                   (&dStack_b0,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
            if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            switch(*(undefined4 *)(lStack_a0 + 0x10)) {
            case 1:
              iVar8 = *(int *)(lStack_a0 + 0x14) + iVar8;
              break;
            case 2:
              uStack_68 = *(undefined8 *)(lStack_a0 + 0x18);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              dVar10 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
              dVar11 = dVar11 + dVar10;
              break;
            case 4:
              iVar6 = *(int *)(lStack_a0 + 0x14) + iVar6;
              break;
            case 5:
              iVar7 = *(int *)(lStack_a0 + 0x14) + iVar7;
              break;
            case 6:
              iVar9 = *(int *)(lStack_a0 + 0x14) + iVar9;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&dStack_b0,*(undefined8 *)PTR_DAT_05811f10);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&dStack_90,*(undefined8 *)PTR_DAT_05811f10);
    puVar1 = PTR_DAT_057db748;
    iStack_cc = iVar8;
    uVar5 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&iStack_cc);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (param_2,*(undefined8 *)PTR_DAT_05786c98,uVar5,0);
    iStack_d0 = iVar7;
    uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&iStack_d0);
                    /* try { // try from 01562eb8 to 01662edf has its CatchHandler @ 01563260 */
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (param_2,*(undefined8 *)PTR_DAT_0575a8a0,uVar5,0);
    iStack_d4 = iVar6;
    uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&iStack_d4);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (param_2,*(undefined8 *)PTR_DAT_057e54d0,uVar5,0);
    iStack_d8 = iVar9;
    uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&iStack_d8);
                    /* try { // try from 01562f14 to 01662f3f has its CatchHandler @ 0156325c */
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (param_2,*(undefined8 *)PTR_DAT_057e3b08,uVar5,0);
    dStack_c8 = dVar11;
    uVar5 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057c1328,&dStack_c8);
                    /* try { // try from 01562f48 to 01662f57 has its CatchHandler @ 01563258 */
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (param_2,*(undefined8 *)PTR_DAT_057a3b60,uVar5,0);
  }
                    /* try { // try from 01562f70 to 01662f77 has its CatchHandler @ 01563254 */
  return;
}

