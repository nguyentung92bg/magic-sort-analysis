/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyItem$$RevealItem
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__RevealItem (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyItem$$RevealItem
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__RevealItem
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__RevealItem_230d390
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if ((bRam0000000005c2a67d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_057b7918);
    bRam0000000005c2a67d = 1;
  }
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x8a) = 1;
  puVar2 = PTR_DAT_057a7f80;
  puVar1 = PTR_DAT_057605b8;
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x88), lVar3 != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,lVar3,*(undefined8 *)PTR_DAT_057b7918);
    while( true ) {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar1);
        return;
      }
      if (plStack_28 == (long *)0x0) break;
      (**(code **)(*plStack_28 + 0x478))(plStack_28,*(undefined8 *)(*plStack_28 + 0x480));
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

