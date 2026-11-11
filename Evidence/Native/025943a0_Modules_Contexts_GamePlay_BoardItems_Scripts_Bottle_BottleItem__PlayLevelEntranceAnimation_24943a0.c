/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayLevelEntranceAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayLevelEntranceAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayLevelEntranceAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayLevelEntranceAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float duration, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayLevelEntranceAnimation_24943a0
          (float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  
  if ((bRam0000000005c2b2c7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058077e8);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b2c7 = 1;
  }
  puVar4 = PTR_DAT_058077e8;
  puVar3 = PTR_DAT_05802430;
  puVar2 = PTR_DAT_057815e0;
  puVar1 = PTR_DAT_057606c8;
  lVar5 = *(long *)(param_2 + 0x88);
  if (lVar5 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar8) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar5 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_2,*(undefined8 *)puVar4,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(param_1 * 0.5,uVar7,lVar5,0);
          return uVar7;
        }
        break;
      }
      plVar6 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar5,iVar8,*(undefined8 *)puVar3);
      if (plVar6 == (long *)0x0) break;
      (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
      lVar5 = *(long *)(param_2 + 0x88);
      iVar8 = iVar8 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

