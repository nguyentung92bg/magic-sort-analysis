/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetWatersOutside
System_Collections_Generic_List_WaterAndColor__o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersOutside (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetWatersOutside
   System_Collections_Generic_List_WaterAndColor__o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersOutside
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersOutside_249c450
               (long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar3 = PTR_DAT_057c3630;
  if ((bRam0000000005c2b30a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578e318);
    FUN_012d0dc8(PTR_DAT_057b90c8);
    FUN_012d0dc8(PTR_DAT_05771758);
    FUN_012d0dc8(PTR_DAT_057d99c8);
    FUN_012d0dc8(PTR_DAT_058089c8);
    FUN_012d0dc8(PTR_DAT_058167f0);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_057c3630);
    FUN_012d0dc8(PTR_DAT_0580a058);
    FUN_012d0dc8(PTR_DAT_057cc568);
    bRam0000000005c2b30a = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar10 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar10,*(undefined8 *)PTR_DAT_058167f0);
    puVar8 = PTR_DAT_0580a058;
    puVar7 = PTR_DAT_058089c8;
    puVar6 = PTR_DAT_05802430;
    puVar5 = PTR_DAT_057cc568;
    puVar4 = PTR_DAT_057b90c8;
    puVar3 = PTR_DAT_05771758;
    lVar13 = *(long *)(param_1 + 0x88);
    if (lVar13 != 0) {
      iVar16 = 0;
      do {
        if (*(int *)(lVar13 + 0x18) <= iVar16) {
          return lVar10;
        }
        plVar11 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar13,iVar16,*(undefined8 *)puVar6);
        if (plVar11 == (long *)0x0) break;
        if ((int)plVar11[3] == 9) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_057d99c8 + 300);
          if ((*(byte *)(*plVar11 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_057d99c8)) {
                    /* WARNING: Subroutine does not return */
            FUN_012d1288();
          }
          if (plVar11[0xb] == 0) break;
          System_Collections_Generic_Stack_Int32Enum___GetEnumerator_3123680
                    (&uStack_98,plVar11[0xb],*(undefined8 *)puVar8);
          uStack_78 = uStack_90;
          uStack_80 = uStack_98;
          uStack_70 = uStack_88;
          while (uVar12 = System_Collections_Generic_Stack_Enumerator_Int32Enum___MoveNext_3ea5b50
                                    (&uStack_80,*(undefined8 *)puVar4), (uVar12 & 1) != 0) {
            uVar9 = System_Collections_Generic_Stack_Enumerator_Int32Enum___get_Current_3ea5c34
                              (&uStack_80,*(undefined8 *)puVar3);
            lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterAndColor___ctor_22f9dbc
                      (lVar13,0,uVar9,1,1,0,0);
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)puVar7;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              plVar11 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
              *plVar11 = lVar13;
              FUN_012d0d74(plVar11,lVar13);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar10,lVar13);
            }
          }
          System_Collections_Generic_Stack_Enumerator_Int32Enum___Dispose_3ea5b44
                    (&uStack_80,*(undefined8 *)PTR_DAT_0578e318);
        }
        lVar13 = *(long *)(param_1 + 0x88);
        iVar16 = iVar16 + 1;
      } while (lVar13 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

