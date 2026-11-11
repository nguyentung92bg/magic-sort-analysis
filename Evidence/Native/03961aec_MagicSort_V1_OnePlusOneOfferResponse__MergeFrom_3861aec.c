/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$MergeFrom
void MagicSort_V1_OnePlusOneOfferResponse__MergeFrom (MagicSort_V1_OnePlusOneOfferResponse_o* __this, MagicSort_V1_OnePlusOneOfferResponse_o* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$MergeFrom
   void MagicSort_V1_OnePlusOneOfferResponse__MergeFrom (MagicSort_V1_OnePlusOneOfferResponse_o*
   __this, MagicSort_V1_OnePlusOneOfferResponse_o* other, const MethodInfo* method); */

void MagicSort_V1_OnePlusOneOfferResponse__MergeFrom_3861aec(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if ((bRam0000000005c3498f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f19b8);
    bRam0000000005c3498f = 1;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    if (*(int *)(*(long *)(param_2 + 0x18) + 0x10) != 0) {
      MagicSort_V1_OnePlusOneOfferResponse__set_EventId_3861154(param_1);
    }
    if (*(long *)(param_2 + 0x20) != 0) {
      *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
    }
    if (*(long *)(param_2 + 0x28) != 0) {
      *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
    }
    if (*(char *)(param_2 + 0x38) != '\0') {
      *(char *)(param_1 + 0x38) = *(char *)(param_2 + 0x38);
    }
    if (*(char *)(param_2 + 0x39) != '\0') {
      *(char *)(param_1 + 0x39) = *(char *)(param_2 + 0x39);
    }
    if (*(long *)(param_2 + 0x40) != 0) {
      if (*(int *)(*(long *)(param_2 + 0x40) + 0x10) != 0) {
        MagicSort_V1_OnePlusOneOfferResponse__set_Segment_3861230(param_1);
      }
      if (*(long *)(param_2 + 0x48) != 0) {
        if (*(int *)(*(long *)(param_2 + 0x48) + 0x10) != 0) {
          MagicSort_V1_OnePlusOneOfferResponse__set_ProductId_38612b4(param_1);
        }
        puVar4 = PTR_DAT_057f19b8;
        if (*(long *)(param_2 + 0x50) != 0) {
          plVar8 = (long *)(param_1 + 0x50);
          lVar5 = *plVar8;
          if (lVar5 == 0) {
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f19b8);
            if (lVar5 == 0) goto LAB_03961c7c;
            MagicSort_V1_ClientCommonRewardModelWithCollection___ctor_385d02c();
            *plVar8 = lVar5;
            FUN_012d0d74(plVar8,lVar5);
            lVar5 = *plVar8;
            if (lVar5 == 0) goto LAB_03961c7c;
          }
          MagicSort_V1_ClientCommonRewardModelWithCollection__MergeFrom_385d968
                    (lVar5,*(undefined8 *)(param_2 + 0x50));
        }
        if (*(long *)(param_2 + 0x58) != 0) {
          plVar8 = (long *)(param_1 + 0x58);
          lVar5 = *plVar8;
          if (lVar5 == 0) {
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
            if (lVar5 == 0) goto LAB_03961c7c;
            MagicSort_V1_ClientCommonRewardModelWithCollection___ctor_385d02c();
            *plVar8 = lVar5;
            FUN_012d0d74(plVar8,lVar5);
            lVar5 = *plVar8;
            if (lVar5 == 0) goto LAB_03961c7c;
          }
          MagicSort_V1_ClientCommonRewardModelWithCollection__MergeFrom_385d968
                    (lVar5,*(undefined8 *)(param_2 + 0x58));
        }
        puVar7 = (undefined8 *)(param_1 + 0x10);
        uVar6 = Google_Protobuf_UnknownFieldSet__MergeFrom_3e567e8
                          (*puVar7,*(undefined8 *)(param_2 + 0x10),0);
        *puVar7 = uVar6;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
LAB_03961c7c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

