/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetBottomSameColorHeight
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBottomSameColorHeight (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetBottomSameColorHeight
   int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBottomSameColorHeight
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

int Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBottomSameColorHeight_249591c
              (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c2b2cf & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05795370);
    FUN_012d0dc8(PTR_DAT_057e1088);
    FUN_012d0dc8(PTR_DAT_05802d58);
    FUN_012d0dc8(PTR_DAT_057822a8);
    bRam0000000005c2b2cf = 1;
  }
  puVar2 = PTR_DAT_057e1088;
  puVar1 = PTR_DAT_05795370;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_48,*(long *)(param_1 + 0x80),*(undefined8 *)PTR_DAT_057822a8);
  iVar7 = 0;
  iVar4 = 0xc;
  while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_48,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar6 = *(long *)(lStack_38 + 0x20);
    if ((iVar4 == 0xc) && (lVar6 != 0)) {
      iVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                        (lVar6,0);
    }
    else if ((lVar6 == 0) ||
            (iVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                               (lVar6,0), iVar4 != iVar3)) break;
    iVar7 = iVar7 + 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_48,*(undefined8 *)puVar1);
  return iVar7;
}

