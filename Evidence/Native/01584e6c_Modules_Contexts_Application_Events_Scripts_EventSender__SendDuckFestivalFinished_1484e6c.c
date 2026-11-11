/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckFestivalFinished
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalFinished (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalFinishEventParameters_o parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckFestivalFinished
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalFinished
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalFinishEventParameters_o parameters, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalFinished_1484e6c
               (undefined8 param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined8 uStack_90;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23847 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057aea40);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0577cea8);
    FUN_012d0dc8(PTR_DAT_057c1310);
    FUN_012d0dc8(PTR_DAT_057dc2f8);
    FUN_012d0dc8(PTR_DAT_057eaf90);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057dfe38);
    FUN_012d0dc8(PTR_DAT_05795788);
    FUN_012d0dc8(PTR_DAT_05771950);
    FUN_012d0dc8(PTR_DAT_057b5318);
    FUN_012d0dc8(PTR_DAT_057a29c0);
    FUN_012d0dc8(PTR_DAT_05803ca0);
    FUN_012d0dc8(PTR_DAT_057fbd18);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23847 = 1;
  }
  lVar13 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
    lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar13,*(undefined8 *)PTR_DAT_05792f78);
    puVar2 = PTR_DAT_057c8a60;
    lVar14 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar14,*(undefined8 *)PTR_DAT_057a1e60);
      lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar14 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar14,*(undefined8 *)PTR_DAT_057b5318,0), puVar1 = PTR_DAT_057d3f68,
         lVar13 != 0)) {
        uVar11 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                           (lVar13,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar1,uVar11,0);
        puVar8 = PTR_DAT_05815af0;
        puVar7 = PTR_DAT_05803ca0;
        puVar6 = PTR_DAT_057db748;
        puVar5 = PTR_DAT_057d6138;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057aea40;
        puVar2 = PTR_DAT_0577cea8;
        puVar1 = PTR_DAT_057636d0;
        if (plVar10 != (long *)0x0) {
          lVar15 = *plVar10;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0158512c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_0158512c:
          uStack_64 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar4,uVar11,0);
          iStack_68 = param_2[2];
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar3,uVar11,0);
          iStack_6c = *param_2;
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar8,uVar11,0);
          iStack_70 = param_2[1];
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)PTR_DAT_057e4da8,uVar11,0);
          iStack_74 = param_2[3];
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)PTR_DAT_057eaf90,uVar11,0);
          iStack_78 = param_2[4];
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)PTR_DAT_05795788,uVar11,0);
          iStack_7c = param_2[5];
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)PTR_DAT_05771950,uVar11,0);
          iStack_80 = param_2[6];
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_80);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)PTR_DAT_057dc2f8,uVar11,0);
          iStack_84 = param_2[7];
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_84);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)PTR_DAT_057fbd18,uVar11,0);
          uStack_90 = *(undefined8 *)(param_2 + 8);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_90);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)PTR_DAT_057dfe38,uVar11,0);
          iStack_94 = param_2[10];
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_94);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)PTR_DAT_057a29c0,uVar11,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar7,*(undefined8 *)(param_2 + 0xe),0);
          iStack_98 = param_2[0x10];
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_98);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar2,uVar11,0);
          iStack_9c = param_2[0x11];
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_9c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)PTR_DAT_057c1310,uVar11,0);
          uVar11 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar13,0);
          lVar13 = *plVar10;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_01585400;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,1);
LAB_01585400:
          iVar9 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DuckFestivalFinished_2db2b94
                             (uVar11,(long)iVar9,(long)param_2[2],(long)*param_2,(long)param_2[1],
                              (long)param_2[3],(long)param_2[4],(long)param_2[5],(long)param_2[6],
                              (long)param_2[7],*(undefined8 *)(param_2 + 8),(long)param_2[10],
                              *(undefined8 *)(param_2 + 0xe),(long)param_2[0x10],(long)param_2[0x11]
                              ,*(undefined8 *)PTR_DAT_05774390,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar14)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

