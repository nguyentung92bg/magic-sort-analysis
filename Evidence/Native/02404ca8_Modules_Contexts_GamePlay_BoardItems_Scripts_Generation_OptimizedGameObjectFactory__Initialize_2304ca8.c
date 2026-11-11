/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.OptimizedGameObjectFactory$$Initialize
void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory__Initialize (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.OptimizedGameObjectFactory$$Initialize
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory__Initialize
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory__Initialize_2304ca8
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2a639 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9560);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05812088);
    FUN_012d0dc8(PTR_DAT_0575cbc8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0575c890);
    FUN_012d0dc8(PTR_DAT_057dbe80);
    FUN_012d0dc8(PTR_DAT_057cfcf0);
    bRam0000000005c2a639 = 1;
  }
  if (((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
      (lVar5 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar5 != 0)) &&
     (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_057c9560), puVar4 = PTR_DAT_0575cbc8,
     lVar5 != 0)) {
    uVar11 = *(undefined8 *)(lVar5 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)PTR_DAT_0576c200);
    }
    lVar5 = UnityEngine_Object__Instantiate_object__2aac7c0(uVar11,*(undefined8 *)puVar4);
    plVar12 = (long *)(param_1 + 0x18);
    *plVar12 = lVar5;
    FUN_012d0d74(plVar12,lVar5);
    puVar4 = PTR_DAT_05812088;
    if (*plVar12 != 0) {
      plVar13 = *(long **)(*plVar12 + 0x18);
      lVar5 = *(long *)PTR_DAT_05812088;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar5 = *(long *)puVar4;
      }
      if (plVar13 != (long *)0x0) {
        puVar8 = *(undefined4 **)(lVar5 + 0xb8);
        lVar5 = *plVar13;
        uVar15 = puVar8[1];
        uVar14 = puVar8[2];
        uVar16 = *puVar8;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0575a2d8) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_02404e4c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_0575a2d8,1);
LAB_02404e4c:
        (*(code *)*puVar6)(uVar16,uVar15,uVar14,plVar13,puVar6[1]);
        if (*plVar12 != 0) {
          UnityEngine_Object__set_name_40914ec(*plVar12,*(undefined8 *)PTR_DAT_057cfcf0,0);
          if (*plVar12 != 0) {
            uVar11 = *(undefined8 *)(*plVar12 + 0x18);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0575c890);
            puVar4 = PTR_DAT_057dbe80;
            if (lVar5 != 0) {
              Modules_Infrastructure_Common_Scripts_Pool_OptimizedGameObjectGenerator___ctor_40e89bc
                        (lVar5,uVar11,0);
              lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
              if (lVar7 != 0) {
                Modules_Infrastructure_Common_Scripts_Pool_OptimizedGameObjectPool___ctor_40e8aa4
                          (lVar7,lVar5,2,0);
                plVar12 = (long *)(param_1 + 0x10);
                *plVar12 = lVar7;
                if (iRam0000000005c3d478 != 0) {
                  puVar1 = (ulong *)(((ulong)plVar12 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

