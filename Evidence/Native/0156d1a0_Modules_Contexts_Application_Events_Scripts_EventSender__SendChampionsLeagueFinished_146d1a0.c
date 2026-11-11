/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendChampionsLeagueFinished
void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeagueFinished (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* tournamentId, int32_t elo, int32_t rank, int32_t score, int32_t promotionInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendChampionsLeagueFinished
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeagueFinished
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   tournamentId, int32_t elo, int32_t rank, int32_t score, int32_t promotionInfo, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendChampionsLeagueFinished_146d1a0
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
               int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237d9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 0156d1f0 to 0166da9f has its CatchHandler @ 0156d1f0
                       catch() { ... } // from try @ 0156d1f0 with catch @ 0156d1f0
                       catch() { ... } // from try @ 0156db88 with catch @ 0156d1f0
                       catch() { ... } // from try @ 0156dfa4 with catch @ 0156d1f0
                       catch() { ... } // from try @ 0156e078 with catch @ 0156d1f0
                       catch() { ... } // from try @ 0156e080 with catch @ 0156d1f0
                       catch() { ... } // from try @ 0156e08c with catch @ 0156d1f0
                       catch() { ... } // from try @ 0156e144 with catch @ 0156d1f0
                       catch() { ... } // from try @ 0156e1e8 with catch @ 0156d1f0 */
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_05771950);
    FUN_012d0dc8(PTR_DAT_057fc288);
    FUN_012d0dc8(PTR_DAT_057a29c0);
    FUN_012d0dc8(PTR_DAT_057c7308);
    FUN_012d0dc8(PTR_DAT_0578b9c8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237d9 = 1;
  }
  lVar10 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
    lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar10,*(undefined8 *)PTR_DAT_05792f78);
    puVar4 = PTR_DAT_057c8a60;
    lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
      plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
      lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      puVar3 = PTR_DAT_057fcce8;
      puVar4 = PTR_DAT_057db748;
      puVar2 = PTR_DAT_057a29c0;
      if (lVar11 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar11,*(undefined8 *)PTR_DAT_0578b9c8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar3,param_2,0);
        iStack_64 = param_3 + 1;
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar2,uVar8,0);
        puVar5 = PTR_DAT_057fc288;
        puVar1 = PTR_DAT_057d3f68;
        puVar3 = PTR_DAT_057c7308;
        puVar2 = PTR_DAT_05771950;
        if (lVar10 != 0) {
          uVar8 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                            (lVar10,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar11,*(undefined8 *)puVar1,uVar8,0);
          iStack_68 = param_4;
          uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar11,*(undefined8 *)puVar2,uVar8,0);
          iStack_6c = param_5;
          uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar11,*(undefined8 *)puVar3,uVar8,0);
          iStack_70 = param_6;
          uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar11,*(undefined8 *)puVar5,uVar8,0);
          puVar3 = PTR_DAT_057caaf0;
          puVar2 = PTR_DAT_057636d0;
          if (plVar7 != (long *)0x0) {
            lVar12 = *plVar7;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_0156d4a0;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_0156d4a0:
            puVar1 = PTR_DAT_0575f9f0;
            uStack_74 = (*(code *)*puVar9)(plVar7,puVar9[1]);
            uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_74);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar11,*(undefined8 *)puVar3,uVar8,0);
            uVar8 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                              (lVar10,0);
            lVar10 = *plVar7;
            uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                  puVar9 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_0156d53c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,1);
LAB_0156d53c:
            iVar6 = (*(code *)*puVar9)(plVar7,puVar9[1]);
            uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MasterLeagueFinished_2dae838
                              (param_2,(long)(param_3 + 1),uVar8,(long)param_4,(long)param_5,
                               (long)param_6,(long)iVar6,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar11);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

