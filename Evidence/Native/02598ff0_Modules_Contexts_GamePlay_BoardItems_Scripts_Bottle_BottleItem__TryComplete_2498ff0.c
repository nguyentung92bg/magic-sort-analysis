/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$TryComplete
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryComplete (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$TryComplete
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryComplete
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryComplete_2498ff0
               (long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShouldComplete_249784c();
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((bRam0000000005c2b2df & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_0580dab8);
    FUN_012d0dc8(PTR_DAT_057b7918);
    bRam0000000005c2b2df = 1;
  }
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  uStack_48 = 0;
  if (*(char *)((long)param_1 + 0x4c) == '\0') {
    *(undefined1 *)((long)param_1 + 0x4c) = 1;
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ConsumeRainbows_24985d0(param_1)
    ;
    puVar4 = PTR_DAT_0580dab8;
    puVar3 = PTR_DAT_057a7f80;
    puVar2 = PTR_DAT_057605b8;
    if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,param_1[0x11],*(undefined8 *)PTR_DAT_057b7918);
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_48,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      if (plStack_38 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((bVar1 <= *(byte *)(*plStack_38 + 300)) &&
           (*(long *)(*(long *)(*plStack_38 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
          Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__OnPreBottleComplete_274d800
                    (plStack_38,param_1,0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar2);
    (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  }
  return;
}

