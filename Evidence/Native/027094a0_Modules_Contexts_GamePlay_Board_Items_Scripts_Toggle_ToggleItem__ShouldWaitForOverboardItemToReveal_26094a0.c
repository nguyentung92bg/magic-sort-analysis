/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$ShouldWaitForOverboardItemToReveal
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldWaitForOverboardItemToReveal (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$ShouldWaitForOverboardItemToReveal
   bool 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldWaitForOverboardItemToReveal
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

byte Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldWaitForOverboardItemToReveal_26094a0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  byte bVar13;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000005c2b9cb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05795370);
    FUN_012d0dc8(PTR_DAT_057e1088);
    FUN_012d0dc8(PTR_DAT_05802d58);
    FUN_012d0dc8(PTR_DAT_05774358);
    FUN_012d0dc8(PTR_DAT_057822a8);
    bRam0000000005c2b9cb = 1;
  }
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                      (*(long *)(param_1 + 0x50),0);
    puVar3 = PTR_DAT_057e1088;
    puVar2 = PTR_DAT_05795370;
    puVar1 = PTR_DAT_05774358;
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x80), lVar5 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_78,lVar5,*(undefined8 *)PTR_DAT_057822a8);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      lStack_50 = lStack_68;
LAB_02709570:
      do {
        do {
          uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_60,*(undefined8 *)puVar3);
          lVar5 = lStack_50;
          if ((uVar6 & 1) == 0) {
            bVar13 = 0;
            iVar12 = 6;
            goto LAB_02709628;
          }
          if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        } while ((*(long *)(lStack_50 + 0x20) == 0) || (*(long *)(lStack_50 + 0x30) == 0));
        plVar7 = (long *)thunk_FUN_01320d5c(*(long *)(lStack_50 + 0x30),*(undefined8 *)puVar1);
        if (plVar7 != (long *)0x0) {
          lVar10 = *plVar7;
          lVar9 = *(long *)puVar1;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar9) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_027095f4;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)FUN_0131971c(plVar7,lVar9,0);
LAB_027095f4:
          uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar6 & 1) != 0) goto LAB_02709570;
        }
        if (*(long *)(lVar5 + 0x20) == lVar4) {
          bVar13 = 1;
          *(undefined1 *)(param_1 + 0x71) = 1;
          iVar12 = 5;
LAB_02709628:
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_60,*(undefined8 *)puVar2);
          return iVar12 == 5 & bVar13;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

