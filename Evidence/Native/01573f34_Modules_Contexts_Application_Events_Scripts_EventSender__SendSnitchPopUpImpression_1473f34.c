/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSnitchPopUpImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSnitchPopUpImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSnitchPopUpImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSnitchPopUpImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSnitchPopUpImpression_1473f34
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
  if ((bRam0000000005c23806 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057f67a8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057f6120);
    FUN_012d0dc8(PTR_DAT_057dbe68);
    FUN_012d0dc8(PTR_DAT_057fde60);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_05783b58);
    bRam0000000005c23806 = 1;
  }
  lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
  if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
    lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar11,*(undefined8 *)PTR_DAT_057f67a8);
    puVar4 = PTR_DAT_057c8a60;
    lVar12 = **(long **)(*(long *)puVar3 + 0xb8);
    if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar12,*(undefined8 *)PTR_DAT_057a1e60);
      lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_057f6120;
      puVar3 = PTR_DAT_057dbe68;
      if (lVar12 != 0) {
                    /* try { // try from 01574084 to 016740ab has its CatchHandler @ 01574348 */
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar12,*(undefined8 *)PTR_DAT_05783b58,0);
        uStack_78 = *(undefined8 *)puVar4;
        uStack_70 = 0xffffffffffffffff;
        uStack_68 = param_2;
        uVar9 = System_Enum__ToString_23a4eac(&uStack_78,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar3,uVar9,0);
        puVar2 = PTR_DAT_057fde60;
        puVar3 = PTR_DAT_057db748;
        if (lVar11 != 0) {
                    /* try { // try from 015740e0 to 01674107 has its CatchHandler @ 01574344 */
          uStack_54 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__GetProgress_246d528
                                (lVar11,0);
          uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_54);
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
                    /* try { // try from 01574148 to 01674153 has its CatchHandler @ 01574338 */
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 01574170 to 0167417b has its CatchHandler @ 01574330 */
                  puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_01574178;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
                    /* try { // try from 01574160 to 0167416b has its CatchHandler @ 01574334 */
            puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_01574178:
            puVar1 = PTR_DAT_0575f9f0;
                    /* try { // try from 01574180 to 0167419f has its CatchHandler @ 0157432c */
            uStack_58 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_58);
                    /* try { // try from 015741a0 to 016741bf has its CatchHandler @ 0157433c */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar12,*(undefined8 *)puVar5,uVar9,0);
            uStack_90 = *(undefined8 *)puVar4;
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
                    /* try { // try from 01574204 to 01674237 has its CatchHandler @ 01574340 */
                if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_01574234;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_01574234:
                    /* try { // try from 01574238 to 016742f7 has its CatchHandler @ 01573f0c */
            iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SnitchPopupImpression_2daf6b4
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

