/* IL2CPP: MagicSort.V1.GetOnePlusOneOfferRequest$$pb::Google.Protobuf.IBufferMessage.InternalWriteTo
void MagicSort_V1_GetOnePlusOneOfferRequest__pb__Google_Protobuf_IBufferMessage_InternalWriteTo (MagicSort_V1_GetOnePlusOneOfferRequest_o* __this, Google_Protobuf_WriteContext_o* output, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03f54508) */
/* IL2CPP:
   MagicSort.V1.GetOnePlusOneOfferRequest$$pb::Google.Protobuf.IBufferMessage.InternalWriteTo
   void MagicSort_V1_GetOnePlusOneOfferRequest__pb__Google_Protobuf_IBufferMessage_InternalWriteTo
   (MagicSort_V1_GetOnePlusOneOfferRequest_o* __this, Google_Protobuf_WriteContext_o* output, const
   MethodInfo* method); */

void MagicSort_V1_GetOnePlusOneOfferRequest__pb__Google_Protobuf_IBufferMessage_InternalWriteTo_385ff38
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    Google_Protobuf_WriteContext__WriteRawTag_3e58704(param_2,8,0);
    Google_Protobuf_WriteContext__WriteInt64_3e57344(param_2,*(undefined8 *)(param_1 + 0x18),0);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    return;
  }
  if ((bRam0000000005c38334 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058165e8,param_2,0);
    FUN_012d0dc8(PTR_DAT_05772408);
    FUN_012d0dc8(PTR_DAT_057fc9a0);
    FUN_012d0dc8(PTR_DAT_057a12b8);
    FUN_012d0dc8(PTR_DAT_057fda40);
    FUN_012d0dc8(PTR_DAT_05771570);
    bRam0000000005c38334 = 1;
  }
  plVar8 = *(long **)(lVar4 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_05772408) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03f54388;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_05772408,0);
LAB_03f54388:
  puVar3 = PTR_DAT_058165e8;
  puVar2 = PTR_DAT_057fc9a0;
  puVar1 = PTR_DAT_057a12b8;
  plVar8 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f54400;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar1,0);
LAB_03f54400:
    uVar6 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar6 == 0) goto LAB_03f544bc;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f5445c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,0);
LAB_03f5445c:
    auVar9 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    if (auVar9._8_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Google_Protobuf_UnknownField__WriteTo_3e53b10(auVar9._8_8_,auVar9._0_8_ & 0xffffffff,param_2);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03f544d8;
    }
  }
LAB_03f544bc:
  puVar5 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar3,0);
LAB_03f544d8:
  (*(code *)*puVar5)(plVar8,puVar5[1]);
  return;
}

