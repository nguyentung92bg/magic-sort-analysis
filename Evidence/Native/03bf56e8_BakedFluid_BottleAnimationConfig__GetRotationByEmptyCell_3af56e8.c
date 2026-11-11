/* IL2CPP: BakedFluid.BottleAnimationConfig$$GetRotationByEmptyCell
BakedFluid_RotationByEmptyCell_o* BakedFluid_BottleAnimationConfig__GetRotationByEmptyCell (BakedFluid_BottleAnimationConfig_o* __this, int32_t bottleHeight, int32_t emptyCell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BakedFluid.BottleAnimationConfig$$GetRotationByEmptyCell
   BakedFluid_RotationByEmptyCell_o* BakedFluid_BottleAnimationConfig__GetRotationByEmptyCell
   (BakedFluid_BottleAnimationConfig_o* __this, int32_t bottleHeight, int32_t emptyCell, const
   MethodInfo* method); */

long BakedFluid_BottleAnimationConfig__GetRotationByEmptyCell_3af56e8
               (long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c36179 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a6b18);
    FUN_012d0dc8(PTR_DAT_0579b028);
    FUN_012d0dc8(PTR_DAT_057d7b80);
    FUN_012d0dc8(PTR_DAT_0578d0e8);
    bRam0000000005c36179 = 1;
  }
  puVar2 = PTR_DAT_057a6b18;
  puVar1 = PTR_DAT_0579b028;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (param_2 == 2) {
    plVar4 = (long *)(param_1 + 0xa0);
  }
  else if (param_2 == 1) {
    plVar4 = (long *)(param_1 + 0xa8);
  }
  else {
    plVar4 = (long *)(param_1 + 0x98);
  }
  if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_48,*plVar4,*(undefined8 *)PTR_DAT_0578d0e8);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_48,*(undefined8 *)puVar1);
    if ((uVar3 & 1) == 0) {
      lVar6 = 0;
      iVar5 = 9;
      goto LAB_03bf57d4;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  } while (*(int *)(lStack_38 + 0x10) != param_3);
  iVar5 = 8;
  lVar6 = lStack_38;
LAB_03bf57d4:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_48,*(undefined8 *)puVar2);
  if (iVar5 != 8) {
    lVar6 = 0;
  }
  return lVar6;
}

