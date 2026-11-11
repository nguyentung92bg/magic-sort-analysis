/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$IsColorSameAsTagColor
bool Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__IsColorSameAsTagColor (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$IsColorSameAsTagColor
   bool Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__IsColorSameAsTagColor
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, int32_t colorId,
   const MethodInfo* method); */

byte Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__IsColorSameAsTagColor_1e99dd4
               (undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((bRam0000000005c2816d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_057b7918);
    FUN_012d0dc8(PTR_DAT_05767220);
    bRam0000000005c2816d = 1;
  }
  puVar3 = PTR_DAT_057a7f80;
  puVar2 = PTR_DAT_05767220;
  puVar1 = PTR_DAT_057605b8;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  uStack_48 = 0;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x88) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_48,*(long *)(param_2 + 0x88),*(undefined8 *)PTR_DAT_057b7918);
  do {
    do {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar3);
      if ((uVar4 & 1) == 0) {
        bVar5 = 0;
        iVar6 = 5;
        goto LAB_01f99ee0;
      }
    } while (plStack_38 == (long *)0x0);
    bVar5 = *(byte *)(*(long *)puVar2 + 300);
  } while (((*(byte *)(*plStack_38 + 300) < bVar5) ||
           (*(long *)(*(long *)(*plStack_38 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar2)) ||
          ((int)plStack_38[0xb] != param_3));
  bVar5 = 1;
  iVar6 = 4;
LAB_01f99ee0:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_48,*(undefined8 *)puVar1);
  return iVar6 == 4 & bVar5;
}

