/* IL2CPP: magicsort.schemas.v1.liveops.paw_touch_offer.PawTouchOfferResponse$$VerifyPawTouchOfferResponse
bool magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__VerifyPawTouchOfferResponse (Google_FlatBuffers_ByteBuffer_o* _bb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x032398d8) */
/* WARNING: Removing unreachable block (ram,0x032398ec) */
/* WARNING: Removing unreachable block (ram,0x032398f4) */
/* WARNING: Removing unreachable block (ram,0x03239904) */
/* WARNING: Removing unreachable block (ram,0x0323990c) */
/* WARNING: Removing unreachable block (ram,0x03239940) */
/* IL2CPP:
   magicsort.schemas.v1.liveops.paw_touch_offer.PawTouchOfferResponse$$VerifyPawTouchOfferResponse
   bool 
   magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__VerifyPawTouchOfferResponse
   (Google_FlatBuffers_ByteBuffer_o* _bb, const MethodInfo* method); */

undefined8
magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__VerifyPawTouchOfferResponse_1739278
          (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_0576d5a0;
                    /* try { // try from 01839288 to 0193928b has its CatchHandler @ 018392a4 */
                    /* try { // try from 0183928c to 0193928f has its CatchHandler @ 018392a0 */
                    /* try { // try from 01839290 to 01939293 has its CatchHandler @ 0183929c */
                    /* try { // try from 01839294 to 01939297 has its CatchHandler @ 01839298 */
  if ((bRam0000000005c24ce8 & 1) == 0) {
                    /* catch() { ... } // from try @ 01839294 with catch @ 01839298 */
                    /* catch() { ... } // from try @ 01839290 with catch @ 0183929c */
                    /* catch() { ... } // from try @ 0183928c with catch @ 018392a0 */
    FUN_012d0dc8(PTR_DAT_0580f050);
                    /* catch() { ... } // from try @ 01839288 with catch @ 018392a4 */
                    /* catch() { ... } // from try @ 018391ec with catch @ 018392a8 */
                    /* catch() { ... } // from try @ 01838fc4 with catch @ 018392ac */
    FUN_012d0dc8(PTR_DAT_0576d5a0);
                    /* catch() { ... } // from try @ 0183905c with catch @ 018392b0
                       catch() { ... } // from try @ 01839260 with catch @ 018392b0 */
                    /* catch() { ... } // from try @ 01839230 with catch @ 018392b4 */
                    /* catch() { ... } // from try @ 01838ff8 with catch @ 018392b8
                       catch() { ... } // from try @ 018390b4 with catch @ 018392b8 */
    FUN_012d0dc8(PTR_DAT_05758d20);
                    /* catch() { ... } // from try @ 018391d8 with catch @ 018392bc */
                    /* catch() { ... } // from try @ 01839110 with catch @ 018392c0 */
                    /* catch() { ... } // from try @ 01839160 with catch @ 018392c4 */
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c24ce8 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_05758d20;
  if (lVar4 == 0) {
LAB_01839348:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Google_FlatBuffers_Verifier___ctor_3138308(lVar4,param_1,0,0);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_05774390;
  if (lVar5 == 0) goto LAB_01839348;
                    /* try { // try from 01839308 to 0193932f has its CatchHandler @ 01839638 */
  Google_FlatBuffers_VerifyTableAction___ctor_3137e80(lVar5,0,*(undefined8 *)PTR_DAT_0580f050,0);
  lVar8 = *(long *)puVar2;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar1 = *(int *)(*(long *)(lVar4 + 0x10) + 0x18);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == 0)) {
    if ((*(long *)(lVar4 + 0x10) == 0) ||
       (lVar9 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar9 == 0)) goto LAB_03238e34;
    if (*(int *)(lVar9 + 0x18) < 8) {
      return 0;
    }
    uVar6 = Google_FlatBuffers_Verifier__BufferHasIdentifier_3138474(lVar4,lVar8,iVar1,lVar8);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  uVar6 = Google_FlatBuffers_Verifier__CheckIndirectOffset_3138d08(lVar4,iVar1);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  iVar3 = Google_FlatBuffers_Verifier__ReadUOffsetT_31385d4
                    (uVar6,*(undefined8 *)(lVar4 + 0x10),iVar1);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03238df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(lVar5 + 0x18))
                      (*(undefined8 *)(lVar5 + 0x40),lVar4,iVar3 + iVar1,
                       *(undefined8 *)(lVar5 + 0x28));
    return uVar7;
  }
LAB_03238e34:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

