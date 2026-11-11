/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.MergeMiniGameItemModel$$Clone
Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameItemModel_o* Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameItemModel__Clone (Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameItemModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.MergeMiniGameItemModel$$Clone
   Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameItemModel_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameItemModel__Clone
   (Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameItemModel_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameItemModel__Clone_2191ef8(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  puVar3 = PTR_DAT_0581a828;
  if ((bRam0000000005c29d9e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781a10);
    FUN_012d0dc8(PTR_DAT_057c7838);
    FUN_012d0dc8(PTR_DAT_0575cf20);
    FUN_012d0dc8(PTR_DAT_057d4cf8);
    FUN_012d0dc8(PTR_DAT_057ea1a8);
    FUN_012d0dc8(PTR_DAT_0578de38);
    FUN_012d0dc8(PTR_DAT_057b3030);
    FUN_012d0dc8(PTR_DAT_057e1220);
    FUN_012d0dc8(PTR_DAT_0581a828);
    bRam0000000005c29d9e = 1;
  }
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar6 != 0) {
    System_Object___ctor_23dfe5c(lVar6,0);
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    FUN_012d0d74();
    if (*(long *)(param_1 + 0x20) == 0) {
      return lVar6;
    }
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057e1220);
    if (lVar7 != 0) {
      System_Collections_Generic_List_object____ctor_21fc26c
                (lVar7,uVar1,*(undefined8 *)PTR_DAT_0578de38);
      plVar12 = (long *)(lVar6 + 0x20);
      *plVar12 = lVar7;
      FUN_012d0d74(plVar12,lVar7);
      puVar5 = PTR_DAT_057d4cf8;
      puVar4 = PTR_DAT_057c7838;
      puVar3 = PTR_DAT_05781a10;
      if (*(long *)(param_1 + 0x20) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_78,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_057ea1a8);
        uStack_58 = uStack_70;
        uStack_60 = uStack_78;
        lStack_50 = lStack_68;
        while( true ) {
          uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_60,*(undefined8 *)puVar4);
          if ((uVar8 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_60,*(undefined8 *)puVar3);
            return lVar6;
          }
          if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar7 = *plVar12;
          uVar9 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameItemModel__Clone_2191ef8
                            ();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar10 = *(long *)(lVar7 + 0x10);
          lVar11 = *(long *)puVar5;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 == 0) break;
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
            FUN_012d0d74();
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(lVar7);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

