/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScrollSingleItemView$$Initialize
void Modules_Contexts_Home_Store_Scripts_StoreScrollSingleItemView__Initialize (Modules_Contexts_Home_Store_Scripts_StoreScrollSingleItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScrollSingleItemView$$Initialize
   void Modules_Contexts_Home_Store_Scripts_StoreScrollSingleItemView__Initialize
   (Modules_Contexts_Home_Store_Scripts_StoreScrollSingleItemView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Store_Scripts_StoreScrollSingleItemView__Initialize_24649b0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar4 = PTR_DAT_057de900;
  if ((bRam0000000005c2b0a7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577e478);
    FUN_012d0dc8(PTR_DAT_057de900);
    bRam0000000005c2b0a7 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_0577e478);
    *(long *)(param_1 + 0x20) = lVar5;
    FUN_012d0d74((long *)(param_1 + 0x20),lVar5);
    puVar4 = PTR_DAT_0575c340;
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      if ((bRam0000000005c2b0e1 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057cd598);
        FUN_012d0dc8(PTR_DAT_0575c340);
        bRam0000000005c2b0e1 = 1;
      }
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if (lVar6 != 0) {
        System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar6,*(undefined8 *)PTR_DAT_057cd598);
        plVar7 = (long *)(lVar5 + 0x18);
        *plVar7 = lVar6;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

