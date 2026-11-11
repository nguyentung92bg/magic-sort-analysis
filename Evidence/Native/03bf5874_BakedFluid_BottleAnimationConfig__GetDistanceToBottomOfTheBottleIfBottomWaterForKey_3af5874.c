/* IL2CPP: BakedFluid.BottleAnimationConfig$$GetDistanceToBottomOfTheBottleIfBottomWaterForKey
float BakedFluid_BottleAnimationConfig__GetDistanceToBottomOfTheBottleIfBottomWaterForKey (BakedFluid_BottleAnimationConfig_o* __this, int32_t selfHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BakedFluid.BottleAnimationConfig$$GetDistanceToBottomOfTheBottleIfBottomWaterForKey
   float BakedFluid_BottleAnimationConfig__GetDistanceToBottomOfTheBottleIfBottomWaterForKey
   (BakedFluid_BottleAnimationConfig_o* __this, int32_t selfHeight, const MethodInfo* method); */

undefined4
BakedFluid_BottleAnimationConfig__GetDistanceToBottomOfTheBottleIfBottomWaterForKey_3af5874
          (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c3617a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ae1f8);
    FUN_012d0dc8(PTR_DAT_0580b238);
    FUN_012d0dc8(PTR_DAT_057ba070);
    FUN_012d0dc8(PTR_DAT_05786380);
    bRam0000000005c3617a = 1;
  }
  puVar2 = PTR_DAT_0580b238;
  puVar1 = PTR_DAT_057ae1f8;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_48,*(long *)(param_1 + 0xe8),*(undefined8 *)PTR_DAT_05786380);
  do {
                    /* try { // try from 03bf590c to 03cf5e23 has its CatchHandler @ 03bf590c
                       catch() { ... } // from try @ 03bf590c with catch @ 03bf590c
                       catch() { ... } // from try @ 03bf5ed0 with catch @ 03bf590c
                       catch() { ... } // from try @ 03bf6050 with catch @ 03bf590c
                       catch() { ... } // from try @ 03bf6080 with catch @ 03bf590c
                       catch() { ... } // from try @ 03bf6384 with catch @ 03bf590c
                       catch() { ... } // from try @ 03bf6398 with catch @ 03bf590c */
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
      iVar4 = 5;
      goto LAB_03bf593c;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  } while (*(int *)(lStack_38 + 0x10) != param_2);
  uVar5 = *(undefined4 *)(lStack_38 + 0x14);
  iVar4 = 4;
LAB_03bf593c:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_48,*(undefined8 *)puVar1);
  if (iVar4 != 4) {
    uVar5 = 0;
  }
  return uVar5;
}

