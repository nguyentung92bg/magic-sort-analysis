/* IL2CPP: magicsort.schemas.v1.liveops.paw_touch_offer.PawTouchOfferResponse$$get_Segment
System_String_o* magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__get_Segment (magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.paw_touch_offer.PawTouchOfferResponse$$get_Segment
   System_String_o* magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__get_Segment
   (magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse_o __this, const MethodInfo*
   method); */

undefined8
magicsort_schemas_v1_liveops_paw_touch_offer_PawTouchOfferResponse__get_Segment_17394d8
          (int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_1,10,0);
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = *param_1;
  if (*(long *)(param_1 + 2) != 0) {
    iVar3 = Google_FlatBuffers_ByteBuffer__ReadLittleEndian_31351ac
                      (*(long *)(param_1 + 2),iVar1 + iVar2,4);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 2) != 0) {
      iVar3 = iVar3 + iVar1 + iVar2;
      uVar6 = Google_FlatBuffers_ByteBuffer__ReadLittleEndian_31351ac
                        (*(long *)(param_1 + 2),iVar3,4);
      lVar7 = *(long *)(param_1 + 2);
      if (lVar7 != 0) {
        iVar3 = iVar3 + 4;
        plVar4 = (long *)System_Text_Encoding__get_UTF8_1f69050(0,iVar3,uVar6);
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((lVar7 != 0) && (plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x03235804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*plVar4 + 0x398))
                            (plVar4,*(undefined8 *)(lVar7 + 0x10),iVar3,uVar6 & 0xffffffff,
                             *(undefined8 *)(*plVar4 + 0x3a0));
          return uVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

