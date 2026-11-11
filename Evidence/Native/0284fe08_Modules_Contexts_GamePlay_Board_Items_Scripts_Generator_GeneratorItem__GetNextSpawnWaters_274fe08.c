/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$GetNextSpawnWaters
System_Collections_Generic_List_ValueTuple_int__ColorId___o* Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__GetNextSpawnWaters (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$GetNextSpawnWaters
   System_Collections_Generic_List_ValueTuple_int__ColorId___o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__GetNextSpawnWaters
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__GetNextSpawnWaters_274fe08
               (long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uStack_58;
  
  puVar3 = PTR_DAT_057988a0;
  if ((bRam0000000005c2c6ea & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7a48);
    FUN_012d0dc8(PTR_DAT_057bc938);
    FUN_012d0dc8(PTR_DAT_057988a0);
    FUN_012d0dc8(PTR_DAT_05819118);
    FUN_012d0dc8(PTR_DAT_0580afd8);
    FUN_012d0dc8(PTR_DAT_057aebd0);
    FUN_012d0dc8(PTR_DAT_057c2430);
    bRam0000000005c2c6ea = 1;
  }
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar9 != 0) {
    System_Collections_Generic_List_ValueTuple_int__Int32Enum_____ctor_2bf9360
              (lVar9,*(undefined8 *)PTR_DAT_057bc938);
    puVar6 = PTR_DAT_05819118;
    puVar5 = PTR_DAT_0580afd8;
    puVar4 = PTR_DAT_057f7a48;
    puVar3 = PTR_DAT_057c2430;
    iVar1 = *(int *)(param_1 + 0x80);
    if (0 < iVar1) {
      iVar13 = 0;
      do {
        lVar10 = *(long *)(param_1 + 0x58);
        if (lVar10 == 0) goto LAB_0284fff4;
        if (*(int *)(lVar10 + 0x18) < 1) {
          return lVar9;
        }
        iVar7 = System_Collections_Generic_Stack_Int32Enum___Pop_31237d0
                          (lVar10,*(undefined8 *)puVar5);
        iVar14 = iVar13 + 1;
        iVar12 = 1;
        iVar13 = iVar14;
        if (iVar14 < iVar1) {
          do {
            lVar10 = *(long *)(param_1 + 0x58);
            if (lVar10 == 0) goto LAB_0284fff4;
            iVar13 = iVar14;
            if ((*(int *)(lVar10 + 0x18) < 1) ||
               (iVar8 = System_Collections_Generic_Stack_Int32Enum___Peek_3123770
                                  (lVar10,*(undefined8 *)puVar6), iVar8 != iVar7)) break;
            if (*(long *)(param_1 + 0x58) == 0) goto LAB_0284fff4;
            System_Collections_Generic_Stack_Int32Enum___Pop_31237d0
                      (*(long *)(param_1 + 0x58),*(undefined8 *)puVar5);
            iVar14 = iVar14 + 1;
            iVar12 = iVar12 + 1;
            iVar13 = iVar1;
          } while (iVar1 != iVar14);
        }
        uStack_58 = 0;
        System_ValueTuple_int__Int32Enum____ctor_2b8d010
                  (&uStack_58,iVar12,iVar7,*(undefined8 *)puVar3);
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_0284fff4;
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uStack_58;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(lVar9);
        }
      } while (iVar13 < iVar1);
    }
    return lVar9;
  }
LAB_0284fff4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

