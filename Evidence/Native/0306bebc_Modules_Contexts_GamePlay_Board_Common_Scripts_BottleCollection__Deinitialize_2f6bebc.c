/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$Deinitialize
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__Deinitialize (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$Deinitialize
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__Deinitialize
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__Deinitialize_2f6bebc
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c30931 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05799cf8);
    FUN_012d0dc8(PTR_DAT_057eb778);
    FUN_012d0dc8(PTR_DAT_0580de48);
    FUN_012d0dc8(PTR_DAT_057d56a8);
    FUN_012d0dc8(PTR_DAT_057a3578);
    FUN_012d0dc8(PTR_DAT_058141a0);
    FUN_012d0dc8(PTR_DAT_057664f8);
    FUN_012d0dc8(PTR_DAT_05789fc8);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c30931 = 1;
  }
  puVar6 = PTR_DAT_057eb778;
  puVar5 = PTR_DAT_057b43e8;
  puVar4 = PTR_DAT_057b0e08;
  puVar3 = PTR_DAT_05799cf8;
  puVar2 = PTR_DAT_05789fc8;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 != 0) {
    iVar11 = 0;
    while (iVar11 < *(int *)(lVar7 + 0x18)) {
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar7,iVar11,*(undefined8 *)puVar4);
      if (lVar7 == 0) goto LAB_0306c044;
      iVar1 = *(int *)(lVar7 + 0x18);
      if (0 < iVar1) {
        iVar12 = 0;
        do {
          lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar7,iVar12,*(undefined8 *)puVar5);
          if (lVar8 == 0) goto LAB_0306c044;
          Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(lVar8,0);
          iVar1 = *(int *)(lVar7 + 0x18);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar1);
      }
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
      lVar7 = *(long *)(param_1 + 0x18);
      iVar11 = iVar11 + 1;
      if (lVar7 == 0) goto LAB_0306c044;
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_88,*(long *)(param_1 + 0x98),*(undefined8 *)puVar2);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      lStack_60 = lStack_78;
      while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_70,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
        if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(lStack_60,0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_70,*(undefined8 *)puVar3);
      lVar7 = *(long *)(param_1 + 0x98);
      if (lVar7 != 0) {
        iVar11 = *(int *)(lVar7 + 0x18);
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (0 < iVar11) {
          System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar11,0);
        }
        lVar7 = *(long *)(param_1 + 0x18);
        if (lVar7 != 0) {
          iVar11 = *(int *)(lVar7 + 0x18);
          *(undefined4 *)(lVar7 + 0x18) = 0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (0 < iVar11) {
            System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar11,0);
          }
          lVar7 = *(long *)(param_1 + 0x20);
          if (lVar7 != 0) {
            iVar11 = *(int *)(lVar7 + 0x18);
            *(undefined4 *)(lVar7 + 0x18) = 0;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (0 < iVar11) {
              System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar11,0);
            }
            plVar10 = (long *)(param_1 + 0x10);
            if (*plVar10 != 0) {
              Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__Recycle_2d97440
                        (*plVar10,0);
              *plVar10 = 0;
              FUN_012d0d74(plVar10,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0306c044:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

