/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagItem$$OnAnyBottleCompleted
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__OnAnyBottleCompleted (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagItem$$OnAnyBottleCompleted
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__OnAnyBottleCompleted
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, int32_t
   waterColorId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__OnAnyBottleCompleted_2f5e59c
               (long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000005c308e8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05817840);
    FUN_012d0dc8(PTR_DAT_057d60c8);
    FUN_012d0dc8(PTR_DAT_057d4150);
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057f6050);
    bRam0000000005c308e8 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  if (*(char *)(param_1 + 0x40) == '\0') {
    if ((*(long *)(param_1 + 0x50) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x40), lVar5 == 0)) {
LAB_0305e724:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar6 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78(lVar5,0);
    puVar4 = PTR_DAT_05817840;
    puVar3 = PTR_DAT_05814878;
    puVar2 = PTR_DAT_057d60c8;
    if ((uVar6 & 1) == 0) {
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_0305e724;
      System_Collections_Generic_List_Int32Enum___GetEnumerator_2052720
                (&uStack_58,*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_057f6050);
      do {
        uVar6 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext_3ea568c
                          (&uStack_58,*(undefined8 *)puVar2);
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
                    (&uStack_58,*(undefined8 *)puVar4);
          lVar5 = *(long *)(param_1 + 0x60);
          if (lVar5 != 0) {
            lVar7 = *(long *)(lVar5 + 0x10);
            lVar8 = *(long *)puVar3;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = param_3;
              }
              else {
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                          (lVar5,param_3);
              }
              Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__TryComplete_2f5e79c
                        (param_1,param_2);
              return;
            }
          }
          goto LAB_0305e724;
        }
      } while ((int)uStack_48 != param_3);
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
                (&uStack_58,*(undefined8 *)puVar4);
    }
  }
  return;
}

