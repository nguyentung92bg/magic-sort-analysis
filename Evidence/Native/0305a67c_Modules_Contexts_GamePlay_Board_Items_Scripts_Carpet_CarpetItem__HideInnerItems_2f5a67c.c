/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$HideInnerItems
void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__HideInnerItems (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0305a800) */
/* WARNING: Removing unreachable block (ram,0x0305a8a0) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$HideInnerItems
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__HideInnerItems
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__HideInnerItems_2f5a67c
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  if ((bRam0000000005c308cd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057b7918);
    bRam0000000005c308cd = 1;
  }
  puVar5 = PTR_DAT_057d0ba8;
  puVar4 = PTR_DAT_057b7918;
  puVar3 = PTR_DAT_057b41c8;
  puVar2 = PTR_DAT_057a7f80;
  puVar1 = PTR_DAT_057605b8;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_70 = 0;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  uStack_90 = 0;
  if (param_1[0xb] != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_a8,param_1[0xb],*(undefined8 *)PTR_DAT_05768d80);
    uStack_68 = uStack_a0;
    uStack_70 = uStack_a8;
    plStack_60 = plStack_98;
    while( true ) {
      uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_70,*(undefined8 *)puVar3);
      plVar6 = plStack_60;
      if ((uVar7 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_70,*(undefined8 *)puVar5);
        return;
      }
      if (plStack_60 == (long *)0x0) break;
      if (plStack_60[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_a8,plStack_60[0x11],*(undefined8 *)puVar4);
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      plStack_80 = plStack_98;
      while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_90,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
        if (plStack_80 != param_1) {
          if (plStack_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          (**(code **)(*plStack_80 + 0x288))(plStack_80,*(undefined8 *)(*plStack_80 + 0x290));
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_90,*(undefined8 *)puVar1);
      lVar8 = *plVar6;
      (**(code **)(lVar8 + 0x288))(plVar6,*(undefined8 *)(lVar8 + 0x290));
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

