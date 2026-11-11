/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSnitchInfoPopUpImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSnitchInfoPopUpImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSnitchInfoPopUpImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSnitchInfoPopUpImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSnitchInfoPopUpImpression_14742a8
               (undefined8 param_1,undefined4 param_2)

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
  ulong uVar14;
  int *piVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23807 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
                    /* try { // try from 015742f8 to 016742fb has its CatchHandler @ 01574328 */
                    /* try { // try from 015742fc to 016742ff has its CatchHandler @ 01574324 */
                    /* try { // try from 01574300 to 01674303 has its CatchHandler @ 01574320 */
    FUN_012d0dc8(PTR_DAT_057f67a8);
                    /* try { // try from 01574304 to 01674307 has its CatchHandler @ 0157431c */
                    /* try { // try from 01574308 to 0167430b has its CatchHandler @ 01573f0c */
                    /* try { // try from 0157430c to 0167430f has its CatchHandler @ 01574318 */
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 01574310 to 01674357 has its CatchHandler @ 01573f0c */
                    /* catch() { ... } // from try @ 0157430c with catch @ 01574318 */
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* catch() { ... } // from try @ 01574304 with catch @ 0157431c */
                    /* catch() { ... } // from try @ 01574300 with catch @ 01574320 */
                    /* catch() { ... } // from try @ 015742fc with catch @ 01574324 */
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* catch() { ... } // from try @ 015742f8 with catch @ 01574328 */
                    /* catch() { ... } // from try @ 01574180 with catch @ 0157432c */
                    /* catch() { ... } // from try @ 01574170 with catch @ 01574330 */
    FUN_012d0dc8(PTR_DAT_057db748);
                    /* catch() { ... } // from try @ 01574160 with catch @ 01574334 */
                    /* catch() { ... } // from try @ 01574148 with catch @ 01574338 */
                    /* catch() { ... } // from try @ 015741a0 with catch @ 0157433c */
    FUN_012d0dc8(PTR_DAT_05781258);
                    /* catch() { ... } // from try @ 01574204 with catch @ 01574340 */
                    /* catch() { ... } // from try @ 015740e0 with catch @ 01574344 */
                    /* catch() { ... } // from try @ 01574084 with catch @ 01574348 */
    FUN_012d0dc8(PTR_DAT_057dbe68);
    FUN_012d0dc8(PTR_DAT_057fde60);
                    /* try { // try from 01574358 to 0167435b has its CatchHandler @ 015743e0 */
    FUN_012d0dc8(PTR_DAT_0579f7e0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23807 = 1;
  }
  lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
  if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
    lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar11,*(undefined8 *)PTR_DAT_057f67a8);
    puVar4 = PTR_DAT_057c8a60;
                    /* try { // try from 015743a4 to 016743cb has its CatchHandler @ 015743ec */
    lVar12 = **(long **)(*(long *)puVar3 + 0xb8);
    if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
                    /* try { // try from 015743cc to 016743d7 has its CatchHandler @ 01573f0c */
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar12,*(undefined8 *)PTR_DAT_057a1e60);
                    /* try { // try from 015743d8 to 016743df has its CatchHandler @ 015743ec */
                    /* catch() { ... } // from try @ 01574358 with catch @ 015743e0 */
      lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_057dbe68;
      puVar3 = PTR_DAT_05781258;
      if (lVar12 != 0) {
                    /* catch() { ... } // from try @ 015743a4 with catch @ 015743ec
                       catch() { ... } // from try @ 015743d8 with catch @ 015743ec */
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar12,*(undefined8 *)PTR_DAT_0579f7e0,0);
        uStack_78 = *(undefined8 *)puVar3;
        uStack_70 = 0xffffffffffffffff;
        uStack_68 = param_2;
        uVar9 = System_Enum__ToString_23a4eac(&uStack_78,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar4,uVar9,0);
        puVar2 = PTR_DAT_057fde60;
        puVar4 = PTR_DAT_057db748;
        if (lVar11 != 0) {
          uStack_54 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__GetProgress_246d528
                                (lVar11,0);
          uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar12,*(undefined8 *)puVar2,uVar9,0);
          puVar5 = PTR_DAT_057caaf0;
          puVar2 = PTR_DAT_057636d0;
          if (plVar8 != (long *)0x0) {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_015744ec;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_015744ec:
            puVar1 = PTR_DAT_0575f9f0;
            uStack_58 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar12,*(undefined8 *)puVar5,uVar9,0);
            uStack_90 = *(undefined8 *)puVar3;
            uStack_88 = 0xffffffffffffffff;
            uStack_80 = param_2;
            uVar9 = System_Enum__ToString_23a4eac(&uStack_90,0);
            iVar6 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__GetProgress_246d528
                              (lVar11,0);
            lVar11 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_015745a8;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_015745a8:
            iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SnitchInfoImpression_2daf760
                              (uVar9,(long)iVar6,(long)iVar7,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar12);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

