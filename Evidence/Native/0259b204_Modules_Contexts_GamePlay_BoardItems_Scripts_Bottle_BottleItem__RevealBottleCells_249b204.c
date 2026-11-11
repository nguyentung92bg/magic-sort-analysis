/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$RevealBottleCells
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RevealBottleCells (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$RevealBottleCells
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RevealBottleCells
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RevealBottleCells_249b204
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  puVar2 = PTR_DAT_057b6128;
  if ((bRam0000000005c2b304 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05795370);
    FUN_012d0dc8(PTR_DAT_057e1088);
    FUN_012d0dc8(PTR_DAT_05802d58);
    FUN_012d0dc8(PTR_DAT_057822a8);
    FUN_012d0dc8(PTR_DAT_0575d540);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057ed108);
    FUN_012d0dc8(PTR_DAT_057b6128);
    bRam0000000005c2b304 = 1;
  }
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar7 != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem___c__DisplayClass126_0___ctor_22f9c6c
              (lVar7,0);
    *(long *)(lVar7 + 0x18) = param_1;
    FUN_012d0d74((long *)(lVar7 + 0x18),param_1);
    plVar10 = (long *)(lVar7 + 0x10);
    *plVar10 = param_1;
    FUN_012d0d74(plVar10,param_1);
    if ((*plVar10 != 0) && (lVar8 = *(long *)(*plVar10 + 0x40), lVar8 != 0)) {
      Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar8,param_1,0);
      puVar6 = PTR_DAT_057ed108;
      puVar5 = PTR_DAT_057e1088;
      puVar4 = PTR_DAT_05795370;
      puVar3 = PTR_DAT_057606c8;
      puVar2 = PTR_DAT_0575d540;
      if ((*plVar10 != 0) && (lVar8 = *(long *)(*plVar10 + 0x80), lVar8 != 0)) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_78,lVar8,*(undefined8 *)PTR_DAT_057822a8);
        uStack_58 = uStack_70;
        uStack_60 = uStack_78;
        lStack_50 = lStack_68;
        while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_60,*(undefined8 *)puVar5), lVar8 = lStack_50,
              (uVar9 & 1) != 0) {
          if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar9 = Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__HasQuestionMark_1e90fb4
                            (lStack_50,0);
          if ((uVar9 & 1) != 0) {
            if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (*(char *)(*(long *)(lVar8 + 0x20) + 0x54) == '\0') {
              Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__TryReveal_1e90f3c(lVar8,0);
            }
            else {
              Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__CompleteQuestionMark_1e90ff0
                        (lVar8,0);
            }
            plVar10 = *(long **)(lVar8 + 0x30);
            if (plVar10 != (long *)0x0) {
              lVar8 = *plVar10;
              bVar1 = *(byte *)(*(long *)puVar2 + 300);
              if ((bVar1 <= *(byte *)(lVar8 + 300)) &&
                 (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
                (**(code **)(lVar8 + 0x278))(plVar10,*(undefined8 *)(lVar8 + 0x280));
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_60,*(undefined8 *)puVar4);
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if (lVar8 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,lVar7,*(undefined8 *)puVar6,0);
          DG_Tweening_DOVirtual__DelayedCall_1edcb38(0x3e800000,lVar8,1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

