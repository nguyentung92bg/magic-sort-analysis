/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWheelOfFortuneImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWheelOfFortuneImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneImpression_1482b58
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 01582b88 to 01682f8f has its CatchHandler @ 01582b88
                       catch() { ... } // from try @ 01582b88 with catch @ 01582b88
                       catch() { ... } // from try @ 01582fc4 with catch @ 01582b88
                       catch() { ... } // from try @ 01583058 with catch @ 01582b88
                       catch() { ... } // from try @ 01583088 with catch @ 01582b88 */
  if ((bRam0000000005c23840 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057b5998);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0580e960);
    FUN_012d0dc8(PTR_DAT_057faac0);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_05793cc8);
    FUN_012d0dc8(PTR_DAT_058196c0);
    FUN_012d0dc8(PTR_DAT_0580b398);
    FUN_012d0dc8(PTR_DAT_057926f0);
    FUN_012d0dc8(PTR_DAT_057fc560);
    FUN_012d0dc8(PTR_DAT_057979a0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_05766090);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23840 = 1;
  }
  lVar17 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
    lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar17,*(undefined8 *)PTR_DAT_057b5998);
    lVar18 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar18 != 0) &&
       ((lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0 &&
        (plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar18,*(undefined8 *)PTR_DAT_057a1e60),
        puVar1 = PTR_DAT_057c8a60, lVar17 != 0)))) {
      uVar12 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetSegment_2da6128
                         (lVar17,0);
      iVar8 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetCurrentStageIndex_2da5930
                        (lVar17,0);
      iVar9 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetRemainingProgressInCurrentStage_2da6e00
                        (lVar17,0);
      uVar13 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetActiveTaskTypes_2da91e8
                         (lVar17,0);
      lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_057d3f68;
      if (lVar18 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar18,*(undefined8 *)PTR_DAT_057926f0,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar1,uVar12,0);
        puVar7 = PTR_DAT_058196c0;
        puVar6 = PTR_DAT_0580b398;
        puVar5 = PTR_DAT_057e66c0;
        puVar4 = PTR_DAT_057e3618;
        puVar3 = PTR_DAT_057db748;
        puVar2 = PTR_DAT_057caaf0;
        puVar1 = PTR_DAT_05793cc8;
        if (plVar11 != (long *)0x0) {
          lVar19 = *plVar11;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar14 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_01582e10;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_01582e10:
          uStack_64 = (*(code *)*puVar14)(plVar11,puVar14[1]);
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar2,uVar15,0);
          iStack_68 = iVar8 + 1;
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_68);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar7,uVar15,0);
          iStack_6c = iVar9;
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar1,uVar15,0);
          uStack_88 = *(undefined8 *)PTR_DAT_057faac0;
          uStack_80 = 0xffffffffffffffff;
          uStack_78 = param_2;
          uVar15 = System_Enum__ToString_23a4eac(&uStack_88,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar4,uVar15,0);
          puVar1 = PTR_DAT_0580e960;
          uVar15 = System_String__Join_int__26e2288
                             (*(undefined8 *)PTR_DAT_057fc560,uVar13,*(undefined8 *)PTR_DAT_0580e960
                             );
          uVar15 = System_String__Concat_1ed10d8
                             (*(undefined8 *)PTR_DAT_057979a0,uVar15,*(undefined8 *)PTR_DAT_05766090
                              ,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar6,uVar15,0);
          uVar15 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetReadableEventId_2da90ec
                             (lVar17,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar5,uVar15,0);
          lVar19 = *plVar11;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 01582fa4 to 01682fb3 has its CatchHandler @ 01583038 */
                puVar14 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_01582fac;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
                    /* try { // try from 01582f90 to 01682f97 has its CatchHandler @ 0158303c */
          puVar14 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_01582fac:
                    /* try { // try from 01582fb4 to 01682fc3 has its CatchHandler @ 01583034 */
          iVar10 = (*(code *)*puVar14)(plVar11,puVar14[1]);
                    /* try { // try from 01582fc4 to 01683053 has its CatchHandler @ 01582b88 */
          uStack_a0 = *(undefined8 *)PTR_DAT_057faac0;
          uStack_98 = 0xffffffffffffffff;
          uStack_90 = param_2;
          uVar15 = System_Enum__ToString_23a4eac(&uStack_a0,0);
          uVar13 = System_String__Join_int__26e2288
                             (*(undefined8 *)PTR_DAT_057fc560,uVar13,*(undefined8 *)puVar1);
          uVar13 = System_String__Concat_1ed10d8
                             (*(undefined8 *)PTR_DAT_057979a0,uVar13,*(undefined8 *)PTR_DAT_05766090
                              ,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01582fb4 with catch @ 01583034
                        */
          uVar16 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetReadableEventId_2da90ec
                             (lVar17,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01582fa4 with catch @ 01583038
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01582f90 with catch @ 0158303c
                        */
                    /* try { // try from 01583054 to 01683057 has its CatchHandler @ 01583078 */
                    /* try { // try from 01583058 to 0168307f has its CatchHandler @ 01582b88 */
          uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WheelOfFortunePopupImpression_2db2e5c
                             (uVar12,(long)iVar10,0,(long)(iVar8 + 1),(long)iVar9,uVar16,uVar15,
                              uVar13,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 01583054 with catch @ 01583078 */
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
                    /* try { // try from 01583080 to 01683087 has its CatchHandler @ 0158309c */
                    /* try { // try from 01583088 to 01683093 has its CatchHandler @ 01582b88 */
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
                    /* try { // try from 01583094 to 0168309b has its CatchHandler @ 0158309c */
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar18)
          ;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01583080 with catch @ 0158309c
                       catch(type#2 @ 00000000) { ... } // from try @ 01583094 with catch @ 0158309c
                        */
                    /* try { // try from 015830a0 to 0168317b has its CatchHandler @ 015830a0
                       catch() { ... } // from try @ 015830a0 with catch @ 015830a0
                       catch() { ... } // from try @ 015831a8 with catch @ 015830a0
                       catch() { ... } // from try @ 015831d0 with catch @ 015830a0
                       catch() { ... } // from try @ 015831f8 with catch @ 015830a0
                       catch() { ... } // from try @ 01583238 with catch @ 015830a0 */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

