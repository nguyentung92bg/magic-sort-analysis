/* IL2CPP: BakedFluid.SpriteShapeCustomControllerConfig$$GetDistanceToBottleIfBottomWater
float BakedFluid_SpriteShapeCustomControllerConfig__GetDistanceToBottleIfBottomWater (BakedFluid_SpriteShapeCustomControllerConfig_o* __this, int32_t bottleHeight, int32_t selfHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BakedFluid.SpriteShapeCustomControllerConfig$$GetDistanceToBottleIfBottomWater
   float BakedFluid_SpriteShapeCustomControllerConfig__GetDistanceToBottleIfBottomWater
   (BakedFluid_SpriteShapeCustomControllerConfig_o* __this, int32_t bottleHeight, int32_t
   selfHeight, const MethodInfo* method); */

undefined4
BakedFluid_SpriteShapeCustomControllerConfig__GetDistanceToBottleIfBottomWater_3af5ab4
          (long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c3617d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ae1f8);
    FUN_012d0dc8(PTR_DAT_0580b238);
    FUN_012d0dc8(PTR_DAT_057ba070);
    FUN_012d0dc8(PTR_DAT_05786380);
    bRam0000000005c3617d = 1;
  }
  puVar2 = PTR_DAT_0580b238;
  puVar1 = PTR_DAT_057ae1f8;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (param_2 == 1) {
    plVar4 = (long *)(param_1 + 0x28);
  }
  else if (param_2 == 2) {
    plVar4 = (long *)(param_1 + 0x20);
  }
  else {
    plVar4 = (long *)(param_1 + 0x18);
  }
  if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_48,*plVar4,*(undefined8 *)PTR_DAT_05786380);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
      iVar5 = 8;
      goto LAB_03bf5ba8;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  } while (*(int *)(lStack_38 + 0x10) != param_3);
  uVar6 = *(undefined4 *)(lStack_38 + 0x14);
  iVar5 = 7;
LAB_03bf5ba8:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_48,*(undefined8 *)puVar1);
  if (iVar5 != 7) {
    uVar6 = 0;
  }
  return uVar6;
}

