/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendEndlessPortalClaimedWithFallback
void Modules_Contexts_Application_Events_Scripts_EventSender__SendEndlessPortalClaimedWithFallback (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendEndlessPortalClaimedWithFallback
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendEndlessPortalClaimedWithFallback
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendEndlessPortalClaimedWithFallback_1463048
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_0576aae0;
                    /* try { // try from 01563050 to 01663087 has its CatchHandler @ 01562a7c */
                    /* catch() { ... } // from try @ 01562f88 with catch @ 01563054 */
                    /* catch() { ... } // from try @ 01563030 with catch @ 01563058 */
                    /* catch() { ... } // from try @ 01563024 with catch @ 0156305c */
                    /* catch() { ... } // from try @ 01562fdc with catch @ 01563060 */
                    /* catch() { ... } // from try @ 01562ff0 with catch @ 01563064 */
                    /* catch() { ... } // from try @ 01562fd0 with catch @ 01563068 */
                    /* catch() { ... } // from try @ 01562fa0 with catch @ 0156306c */
  if ((bRam0000000005c237ad & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 01563088 to 0166309f has its CatchHandler @ 0156323c */
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 015630a8 to 016630ab has its CatchHandler @ 01563238 */
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* try { // try from 015630ac to 016630b7 has its CatchHandler @ 01563234 */
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 015630bc to 016630db has its CatchHandler @ 01563230 */
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0576dcc0);
    FUN_012d0dc8(PTR_DAT_0576f090);
                    /* try { // try from 015630e0 to 016630ef has its CatchHandler @ 0156322c */
    FUN_012d0dc8(PTR_DAT_057caaf0);
                    /* try { // try from 015630f0 to 016631fb has its CatchHandler @ 01562a7c */
    FUN_012d0dc8(PTR_DAT_057fb6b8);
    bRam0000000005c237ad = 1;
  }
  puVar3 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar8 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar8 != 0)) {
    plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar8,*(undefined8 *)PTR_DAT_057a1e60);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar8 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar8,*(undefined8 *)PTR_DAT_0576f090,0), puVar6 = PTR_DAT_057fb6b8,
       puVar5 = PTR_DAT_057db748, puVar4 = PTR_DAT_057caaf0, puVar3 = PTR_DAT_0576dcc0,
       puVar2 = PTR_DAT_057636d0, plVar9 != (long *)0x0)) {
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_015631d4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_015631d4:
      puVar1 = PTR_DAT_0575f9f0;
      uStack_54 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_54);
                    /* try { // try from 015631fc to 0166320b has its CatchHandler @ 01563228 */
                    /* try { // try from 0156320c to 01663213 has its CatchHandler @ 01563224 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar4,uVar11,0);
                    /* try { // try from 01563214 to 01663217 has its CatchHandler @ 01563220 */
                    /* try { // try from 01563218 to 01663243 has its CatchHandler @ 01562a7c */
      lVar12 = param_2;
                    /* catch() { ... } // from try @ 01563214 with catch @ 01563220 */
      if (param_2 == 0) {
        lVar12 = *(long *)puVar6;
      }
                    /* catch() { ... } // from try @ 0156320c with catch @ 01563224 */
                    /* catch() { ... } // from try @ 015631fc with catch @ 01563228 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar3,lVar12,0);
                    /* catch() { ... } // from try @ 015630e0 with catch @ 0156322c */
      lVar12 = *plVar9;
                    /* catch() { ... } // from try @ 015630bc with catch @ 01563230 */
                    /* catch() { ... } // from try @ 015630ac with catch @ 01563234 */
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                    /* catch() { ... } // from try @ 015630a8 with catch @ 01563238 */
      if (uVar13 != 0) {
                    /* catch() { ... } // from try @ 01563088 with catch @ 0156323c */
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
                    /* try { // try from 01563244 to 01663247 has its CatchHandler @ 0156331c */
                    /* try { // try from 01563248 to 01663283 has its CatchHandler @ 01562a7c */
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0156327c;
          }
          uVar13 = uVar13 - 1;
                    /* catch() { ... } // from try @ 01562f70 with catch @ 01563254 */
          piVar14 = piVar14 + 4;
                    /* catch() { ... } // from try @ 01562f48 with catch @ 01563258 */
        } while (uVar13 != 0);
      }
                    /* catch() { ... } // from try @ 01562f14 with catch @ 0156325c */
                    /* catch() { ... } // from try @ 01562eb8 with catch @ 01563260 */
      puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar2,1);
LAB_0156327c:
                    /* try { // try from 01563284 to 01663287 has its CatchHandler @ 01563314 */
      iVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* try { // try from 01563298 to 016632ff has its CatchHandler @ 0156331c */
      if (param_2 == 0) {
        param_2 = *(long *)puVar6;
      }
      uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__EndlessPortalClaimWithFallback_2dacf9c
                         ((long)iVar7,param_2,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

