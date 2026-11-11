/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemsSpriteLibrary$$BuildLookup
System_Collections_Generic_Dictionary_ValueTuple_int__int___SpriteRenderer__o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemsSpriteLibrary__BuildLookup (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemsSpriteLibrary_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x04213714) */
/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemsSpriteLibrary$$BuildLookup
   System_Collections_Generic_Dictionary_ValueTuple_int__int___SpriteRenderer__o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemsSpriteLibrary__BuildLookup
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemsSpriteLibrary_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemsSpriteLibrary__BuildLookup_411351c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar1 = PTR_DAT_057f42e0;
  if ((bRam0000000005c3ac07 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ae610);
    FUN_012d0dc8(PTR_DAT_0577edb0);
    FUN_012d0dc8(PTR_DAT_057f42e0);
    FUN_012d0dc8(PTR_DAT_05807c70);
    FUN_012d0dc8(PTR_DAT_057a9a78);
    FUN_012d0dc8(PTR_DAT_057cb260);
    FUN_012d0dc8(PTR_DAT_057f5bc8);
    FUN_012d0dc8(PTR_DAT_0577fdc0);
    FUN_012d0dc8(PTR_DAT_05818bf8);
    FUN_012d0dc8(PTR_DAT_057fa5c0);
    FUN_012d0dc8(PTR_DAT_05799b68);
    FUN_012d0dc8(PTR_DAT_05815980);
    bRam0000000005c3ac07 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar10 != 0) {
    System_Collections_Generic_Dictionary_ValueTuple_int__int___object____ctor_3f5b714
              (lVar10,*(undefined8 *)PTR_DAT_057ae610);
    puVar7 = PTR_DAT_05815980;
    puVar6 = PTR_DAT_05807c70;
    puVar5 = PTR_DAT_057f5bc8;
    puVar4 = PTR_DAT_057cb260;
    puVar3 = PTR_DAT_057a9a78;
    puVar2 = PTR_DAT_05799b68;
    puVar1 = PTR_DAT_0577edb0;
    if (*(long *)(param_1 + 0x18) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_b8,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057fa5c0);
      uStack_78 = uStack_b0;
      uStack_80 = uStack_b8;
      lStack_70 = lStack_a8;
      while( true ) {
        uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_80,*(undefined8 *)puVar5);
        lVar9 = lStack_70;
        if ((uVar11 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_80,*(undefined8 *)puVar6);
          return lVar10;
        }
        if (lStack_70 == 0) break;
        if (*(long *)(lStack_70 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_b8,*(long *)(lStack_70 + 0x18),*(undefined8 *)puVar2);
        uStack_98 = uStack_b0;
        uStack_a0 = uStack_b8;
        lStack_90 = lStack_a8;
        while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_a0,*(undefined8 *)puVar4), lVar8 = lStack_90,
              (uVar11 & 1) != 0) {
          if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uStack_b8 = 0;
          System_ValueTuple_int__int____ctor_2b8bfd0
                    (&uStack_b8,*(undefined4 *)(lVar9 + 0x10),*(undefined4 *)(lStack_90 + 0x10),
                     *(undefined8 *)puVar7);
          System_Collections_Generic_Dictionary_ValueTuple_int__int___object___set_Item_3f5c178
                    (lVar10,uStack_b8,*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)puVar1);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_a0,*(undefined8 *)puVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

