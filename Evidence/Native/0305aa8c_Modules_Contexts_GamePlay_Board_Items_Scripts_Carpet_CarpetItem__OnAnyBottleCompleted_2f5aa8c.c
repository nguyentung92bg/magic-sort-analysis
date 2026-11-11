/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$OnAnyBottleCompleted
void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__OnAnyBottleCompleted (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$OnAnyBottleCompleted
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__OnAnyBottleCompleted
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, int32_t
   waterColorId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__OnAnyBottleCompleted_2f5aa8c
               (long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c308cf & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05817840);
    FUN_012d0dc8(PTR_DAT_057d60c8);
    FUN_012d0dc8(PTR_DAT_057d4150);
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057f6050);
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c308cf = 1;
  }
  puVar4 = PTR_DAT_05817840;
  puVar3 = PTR_DAT_05814878;
  puVar2 = PTR_DAT_057d60c8;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x58) == 0) {
LAB_0305ac04:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (0 < *(int *)(*(long *)(param_1 + 0x58) + 0x18)) {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_0305ac04;
    System_Collections_Generic_List_Int32Enum___GetEnumerator_2052720
              (&uStack_48,*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_057f6050);
    do {
      uVar5 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext_3ea568c
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
                  (&uStack_48,*(undefined8 *)puVar4);
        lVar6 = *(long *)(param_1 + 0x60);
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar6 + 0x10);
          lVar8 = *(long *)puVar3;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = param_3;
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar6,param_3);
            }
            Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__Progress_2f5ac7c
                      (param_1,0);
            return;
          }
        }
        goto LAB_0305ac04;
      }
    } while ((int)uStack_38 != param_3);
    System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
              (&uStack_48,*(undefined8 *)puVar4);
  }
  return;
}

