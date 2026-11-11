/* IL2CPP: magicsort.schemas.v1.liveops.paw_touch_offer.PawTouchOfferResponse$$get_EventType
int64_t magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__get_EventType (magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x032352e4) */
/* IL2CPP: magicsort.schemas.v1.liveops.paw_touch_offer.PawTouchOfferResponse$$get_EventType
   int64_t magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__get_EventType
   (magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse_o __this, const MethodInfo*
   method); */

ulong magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__get_EventType_1739448
                (int *param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  iVar4 = Google_FlatBuffers_Table____offset_3139a10(param_1,6,0);
  puVar3 = PTR_DAT_0577ac00;
  if (iVar4 == 0) {
                    /* try { // try from 01839484 to 019394ab has its CatchHandler @ 01839634 */
    return 0;
  }
  lVar7 = *(long *)(param_1 + 2);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar2 = *param_1;
  uVar6 = (ulong)(uint)(iVar2 + iVar4);
  if ((bRam0000000005c3149d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577ac00);
    bRam0000000005c3149d = 1;
  }
  Google_FlatBuffers_ByteBuffer__AssertOffsetAndLength_3135300(lVar7,uVar6,8);
  uVar5 = *(ulong *)puVar3;
  if (*(int *)(uVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    uVar5 = *(ulong *)puVar3;
  }
  if (**(char **)(uVar5 + 0xb8) == '\0') {
    if (*(long *)(lVar7 + 0x10) == 0) goto LAB_032352f8;
    lVar9 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10);
    uVar6 = 0;
    uVar5 = 0;
    lVar7 = 8;
    do {
      if (lVar9 == 0) goto LAB_032352f8;
      uVar10 = ((iVar2 + iVar4) - 1U) + (int)lVar7;
      if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_032352fc;
      uVar8 = uVar6 & 0x38;
      lVar7 = lVar7 + -1;
      uVar6 = uVar6 + 8;
      uVar5 = (ulong)*(byte *)(lVar9 + (int)uVar10 + 0x20) << uVar8 | uVar5;
    } while (lVar7 != 0);
  }
  else {
    if (*(long *)(lVar7 + 0x10) == 0) {
LAB_032352f8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0(uVar5);
    }
    lVar9 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10);
    uVar8 = 0;
    uVar5 = 0;
    lVar7 = uVar6 << 0x20;
    do {
      if (lVar9 == 0) goto LAB_032352f8;
      if (*(uint *)(lVar9 + 0x18) <= uVar6) {
LAB_032352fc:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      lVar1 = lVar7 >> 0x20;
      uVar11 = uVar8 & 0x38;
      uVar8 = uVar8 + 8;
      lVar7 = lVar7 + 0x100000000;
      uVar5 = (ulong)*(byte *)(lVar9 + lVar1 + 0x20) << uVar11 | uVar5;
      uVar6 = uVar6 + 1;
    } while (uVar8 != 0x40);
  }
  return uVar5;
}

